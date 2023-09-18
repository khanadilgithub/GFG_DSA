#include<iostream>
#include<math.h>
using namespace std;

//Naive solution 

int maxCrclrSum(int arr[], int n)
{
    int res= arr[0];

    for(int i=0; i<n; i++)
    {
        int curmax=arr[i];
        int cursum=arr[i];

        for (int j=1; j<n; j++)
        {
            int indx=(i+j)%n;

            cursum+=arr[indx];
            curmax = max(curmax, cursum);
        }

        res = max(res,curmax);
    }

    return res;
}


//Efficinet Solution 

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

int maxCircularSum(int arr[], int n)
{
    int arraySum=0;
    int subarySum=maxSubarraySum(arr, n);

    if(subarySum<0)
    {
        return subarySum;
    }

    for(int i=0; i<n; i++)
    {
        arraySum+=arr[i];

        arr[i]=-arr[i];
    }

    int circularSum = maxSubarraySum(arr,n)+arraySum;

    return max(subarySum, circularSum);
}

int main()
{
    int arr[] = {5,-2,3,4};

    int arr1[] = {8,-4,3,-5,4};


    cout<<maxCrclrSum(arr,4)<<endl;
    cout<<maxCrclrSum(arr1,5)<<endl;

    cout<<maxCircularSum(arr,4)<<endl;
    cout<<maxCircularSum(arr1,5)<<endl;

}