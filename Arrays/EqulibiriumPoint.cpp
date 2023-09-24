#include<iostream>
#include<math.h>
using namespace std;


//Naive Solution

bool equilPoint(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int ls=0,rs=0;

        for(int j=0; j<i; j++)
        {
            ls+=arr[j];
        }
        for(int k=i+1; k<n; k++)
        {
            rs+=arr[k];
        }

        if(ls==rs) return true;
    }

    return false;
}

//Efficent solution

bool equilbrmPoint(int arr[], int n)
{
    int lsa[n] = {0};
    int rsa[n] = {0};

    lsa[0]=arr[0];
    rsa[n-1]=arr[n-1];

    for(int i=1; i<n; i++)
    {
        lsa[i]=lsa[i-1]+arr[i]; //prefix sum array
    }

    for(int j=n-2; j>=0; j--)
    {
        rsa[j]=rsa[j+1]+arr[j]; //suffix sum array
    }

    for(int k=0; k<n; k++)
    {
        if(lsa[k]==rsa[k]) return true; //equlibrium point comparision
    }

    return false;
}

//Efficient solution 2

bool eqlbrmPoint(int arr[], int n)
{
    int rs=0;

    for(int i=0; i<n; i++)
    {
        rs+=arr[i];
    }

    int ls=0;

    for(int j=0; j<n; j++)
    {
        rs-=arr[j];

        if(ls==rs) return true;

        ls+=arr[j];
    }

    return false;
}

int main()
{
    int arr[] = {3,4,8,-9,9,7};

    cout<<equilPoint(arr,6)<<endl;

    cout<<equilbrmPoint(arr,6)<<endl;

    cout<<eqlbrmPoint(arr,6)<<endl;
    
}
