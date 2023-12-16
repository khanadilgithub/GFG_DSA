#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;

//Naive Solution
int longestSubarray(int arr[], int n, int sum)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        int cursum=0, curlen=0;
        for(int j=i; j<n; j++)
        {
            cursum+=arr[j];
            curlen++;
            if(cursum==sum)
            {
                res=max(res,curlen);

                //res=max(res,j-1+1); this also will work
            }
        }
    }
    return res;
}

//Efficinet Solution

int longestSubarrays(int arr[], int n, int sum)
{
    int res=0;
    int prefixsum=0;

    unordered_map<int, int> psumindx;

    for(int i=0; i<n; i++)
    {
        prefixsum+=arr[i];

        if(prefixsum==sum)
        {
            res=i+1;
        }
        if(psumindx.find(prefixsum-sum)!=psumindx.end())
        {
            res=max(res, i-psumindx[prefixsum-sum]);
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
    int arr1[] = {5,8,-4,-4,9,-2,2};

    int sum1=0;

    int arr2[] = {3,1,0,1,8,2,3,6};

    int sum2=5;

    int arr3[] = {8,3,7};

    int sum3=15;

    cout<<longestSubarray(arr1, 7, sum1)<<endl;

    cout<<longestSubarray(arr2, 8, sum2)<<endl;

    cout<<longestSubarray(arr3, 3, sum3)<<endl;

    
    cout<<longestSubarrays(arr1, 7, sum1)<<endl;

    cout<<longestSubarrays(arr2, 8, sum2)<<endl;

    cout<<longestSubarrays(arr3, 3, sum3)<<endl;
}