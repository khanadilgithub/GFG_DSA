#include<iostream>
#include<math.h>
using namespace std;

//Naive SoLution

int secondLargest(int arr[], int n)
{
    int maxindx=0;
    int res=-1;
    
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[maxindx]) maxindx=i;
    }

    for(int j=0; j<n; j++)
    {
        if(arr[j]!=arr[maxindx])
        {
            if(res==-1 || arr[j]>arr[res]) res=j;
        }
    }

    return res;
}

//optimized solution

int secondLargst(int arr[], int n)
{
    int mxindx=0;
    int ans=-1;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>arr[mxindx])
        {
            ans=mxindx;
            mxindx=i;
        }
        else if(arr[i]<arr[mxindx])
        {
            if((ans==-1) || (arr[i] > arr[ans])) 
            {
                ans=i;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {10,10,10};

    int arr1[] = {5,20,12,20,8};

    cout<<secondLargest(arr,3)<<endl;

    cout<<secondLargest(arr1,5)<<endl;

    cout<<secondLargst(arr,3)<<endl;

    cout<<secondLargst(arr1,5)<<endl;
}