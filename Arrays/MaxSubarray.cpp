#include<iostream>
#include<math.h>
using namespace std;

//Naive solution

int maxsubarraySum(int arr[],int n)
{
    int ans=arr[0];

    for(int i=0; i<n; i++)
    {
        int curmx=0;
        for(int j=i; j<n; j++)
        {
            curmx=curmx+arr[j];
            ans=max(ans,curmx);
        }
    }
    return ans;
}


//Efficient approach
int maxSubarraySum(int arr[], int n)
{
    int ans=arr[0];
    int curmx=arr[0];

    for(int i=1; i<n; i++)
    {
        curmx=max((curmx+arr[i]),arr[i]);
        ans=max(ans,curmx);
    }
    return ans;
}

int main()
{
    int arr[] = {-5,1,-2,3,-1,2,-2};

    int arr1[] = {1,-2,3,-1,2};

    cout<<maxsubarraySum(arr, 7)<<endl;

    cout<<maxsubarraySum(arr1, 5)<<endl;

    cout<<maxSubarraySum(arr, 7)<<endl;

    cout<<maxSubarraySum(arr1, 5)<<endl;
}