#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;

//Naive Solution
int longestSubarray(int arr1[], int arr2[], int n)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        int sum1=0, sum2=0;
        for(int j=i; j<n; j++)
        {
            sum1+=arr1[j];
            sum2+=arr2[j];
            if(sum1==sum2)
            {
                res=max(res,j-i+1);

            }
        }
    }
    return res;
}

//Efficinet Solution

int longestSubarrays(int arr1[], int arr2[], int n)
{
    int res=0;
    int prefixsum=0;

    unordered_map<int, int> psumindx;

    int temp[n] = {0};

    for(int i=0; i<n; i++)
    {
        temp[i]=arr1[i]-arr2[i];
    }

    for(int i=0; i<n; i++)
    {
        prefixsum+=temp[i];

        if(prefixsum==0)
        {
            res=i+1;
        }
        if(psumindx.find(prefixsum)!=psumindx.end())
        {
            res=max(res, i-psumindx[prefixsum]);
        }
        else
        {
            psumindx[prefixsum] = i;
        }
    }

    return res;
}

int main()
{
    int arr1[] = {0,1,0,0,0,0};

    int arr2[] = {1,0,1,0,0,1};


    int arr3[] = {0,0,0,0,0};

    int arr4[] = {1,1,1,1,1};

    cout<<longestSubarray(arr1, arr2, 6)<<endl;

    cout<<longestSubarray(arr3, arr4, 5)<<endl;

    
    cout<<longestSubarrays(arr1, arr2, 6)<<endl;

    cout<<longestSubarrays(arr3, arr4, 5)<<endl;
}