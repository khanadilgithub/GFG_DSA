#include<iostream>
#include<math.h>
using namespace std;

//Naive Solution 

int trpngRainWater(int arr[], int n)
{
    int lftmx=0, rgtmx=0;
    int ans=0;
    for(int i=1; i<n-1; i++)
    {
        for(int j=0; j<i; j++)
        {
            lftmx=max(lftmx,arr[j]);
        }

        for(int k=i+1; k<n; k++)
        {
            rgtmx=max(rgtmx,arr[k]);
        }

        ans+=(min(lftmx,rgtmx)-arr[i]);
    }
    return ans;
}

// Efficent solution 

int trapingRainWater(int arr[], int n)
{
    int lftmax[n]={0};

    int rgtmax[n] = {0};

    int ans=0;

    lftmax[0]=arr[0];
    rgtmax[n-1]=arr[n-1];

    for(int i=1; i<n ; i++)
    {
        lftmax[i]=max(lftmax[i-1],arr[i]);
    }

    for(int i=n-2; i>=0; i--)
    {
        rgtmax[i]=max(rgtmax[i+1],arr[i]);
    }

    for(int i=1; i<n-1; i++)
    {
        ans+=(min(lftmax[i],rgtmax[i])-arr[i]);
    }

    return ans;
}

int main()
{
    int arr[] = {3,0,1,2,5};

    cout<<trapingRainWater(arr, 5)<<endl;

    cout<<trpngRainWater(arr, 5)<<endl;
}