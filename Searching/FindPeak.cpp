#include<iostream>
#include<math.h>
using namespace std;

//Naive Solution

int getPeak(int arr[], int n)
{
    if(n==1 || (arr[0]>=arr[1])) return arr[0];

    if(arr[n-1]>=arr[n-2]) return arr[n-1];

    for(int i=1; i<n-2; i++)
    {
        if((arr[i-1]<=arr[i]) && (arr[i+1]<=arr[i]))
        {
            return arr[i];
        }
    }
    return -1;
}

//Efficient Solution

int GetPeak(int arr[], int n)
{
    int lp=0, rp=n-1;

    while(lp<=rp)
    {
        int mid=(lp+rp)/2;

        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
        {
            return arr[mid];
        }
        if(mid>0 && (arr[mid-1] >=arr[mid]))
        {
            rp=mid-1;
        }
        else 
        {
            lp=mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5,20,40,30,20,50,10};

    cout<<getPeak(arr, 7)<<endl;

    cout<<GetPeak(arr, 7)<<endl;
}