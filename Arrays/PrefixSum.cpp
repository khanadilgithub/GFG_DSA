#include<iostream>
#include<math.h>
using namespace std;

//Naive solution
int PrefixSum(int arr[], int n, int lindx, int rindx)
{
    int res=0;

    for(int i=lindx; i<=rindx; i++)
    {
        res+=arr[i];
    }

    return res;
}

//Constant time query solution

int ppa[100] = {0};

void prefixSum(int arr[], int n)
{
    ppa[0]=arr[0];

    for(int i=1; i<n; i++)
    {
        ppa[i]=ppa[i-1]+arr[i];
    }
}

int getSum(int lindx, int rindx)
{
    if(lindx==0) return ppa[rindx];

    return (ppa[rindx]-ppa[lindx-1]);
}

int main()
{
    int arr[] = {2,8,3,9,6,5,4};

    cout<<PrefixSum(arr,7,2,5)<<endl;

    prefixSum(arr,7);

    cout<<getSum(2,5)<<endl;
}