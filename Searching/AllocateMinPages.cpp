#include<iostream>
#include<math.h>
using namespace std;

//Naive Solution

int sum(int arr[], int st, int end)
{
    int s=0;
    for(int i=st; i<=end; i++)
    {
        s+=arr[i];
    }
    return s;
}
int minPages(int arr[], int n, int k)
{
    if(k==1)
    {
        return sum(arr,0,n-1);
    }
    if(n==1)
    {
        return arr[0];
    }

    int res=INT8_MAX;

    for(int i=1; i<n; i++)
    {
        res=min(res,max(minPages(arr,i,k-1),sum(arr,i,n-1)));
    }
    return res;
}

//Efficent Solution 

//will add later


int main()
{
    int arr[] = {10,5,30,1,2,5,10,10};
    int k=3;
    cout<<minPages(arr, 8, k)<<endl;
}