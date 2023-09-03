#include<iostream>
#include<math.h>
using namespace std;

int subset(int* arr, int sum, int n)
{
    if(n==0)
    {
        if(sum==0) return 1;
        else return 0;
    }

    return (subset(arr, sum, n-1)+ subset(arr, sum-arr[n-1], n-1));
}

int main()
{
    int arr[] = {10,5,2,3,6};
    int arr1[] = {1,2,3};
    int n=5;
    int n1=3;
    int sum=8;
    int sum1=4;

    cout<<subset(arr, sum, n)<<endl;

    cout<<subset(arr1, sum1, n1)<<endl;
}
