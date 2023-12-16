#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;

//Naive Solution
int longestSubarray(int arr[], int n)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        int co=0, c1=0;
        for(int j=i; j<n; j++)
        {
            if(arr[j]==0)
            {
                co++;
            }
            else
            {
                c1++;
            }
        }
        if(c1==co)
        {
            res=max(res, co+c1);
        }
    }
    return res;
}

//Efficinet Solution

int longestSubarrays(int arr[], int n)
{
    int res=0;
    int prefixsum=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            arr[i]=-1;
        }
    }

    unordered_map<int, int> psumindx;

    for(int i=0; i<n; i++)
    {
        prefixsum+=arr[i];

        if(prefixsum==0)
        {
            res=i+1;
        }
        if(psumindx.find(prefixsum)!=psumindx.end())
        {
            res=max(res, i-psumindx[prefixsum]);
        }
        else if(psumindx.find(prefixsum)==psumindx.end())
        {
            psumindx[prefixsum] = i;
        }
    }

    return res;
}

int main()
{
    int arr1[] = {1,0,1,1,1,0,0};

    int arr2[] = {1,1,1,1,1,1,1,1};

    int arr3[] = {0,0,1,0,1,1};


    cout<<longestSubarray(arr1, 7)<<endl;

    cout<<longestSubarray(arr2, 8)<<endl;

    cout<<longestSubarray(arr3, 6)<<endl;

    
    cout<<longestSubarrays(arr1, 7)<<endl;

    cout<<longestSubarrays(arr2, 8)<<endl;

    cout<<longestSubarrays(arr3, 6)<<endl;
}