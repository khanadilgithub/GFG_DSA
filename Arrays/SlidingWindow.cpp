#include<iostream>
#include<math.h>
using namespace std;

//Naive Soution
int maxSumFixsizesubarray(int arr[], int n, int k)
{
    int cursum=0;
    int maxsum = INT32_MIN;

    for(int i=0; i<n-k; i++)
    {   
        for(int j=i; j<i+k; j++)
        {
            cursum+=arr[j];
        }
        maxsum = max(cursum,maxsum);
        cursum=0;
    }
    return maxsum;
}

//efficent Solution(Sliding window technique)
int maxSumFixsizeSubarray(int arr[], int n, int k)
{
    int cursum=0;

    for(int i=0; i<k; i++)
    {
        cursum+=arr[i];
    }

    int maxsum= cursum;

    for(int j=k; j<n; j++)
    {
        cursum=(cursum-arr[j-k])+arr[j];
        maxsum=max(cursum,maxsum);
    }
    return maxsum;
}


int main()
{
    int arr[] = {10,5,-2,20,1};
    int k=3;

    cout<<maxSumFixsizesubarray(arr,5,3)<<endl;

    cout<<maxSumFixsizeSubarray(arr,5,3)<<endl;
}