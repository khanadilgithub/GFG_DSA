#include<iostream>
#include<math.h>
using namespace std;

int maxDifference(int arr[], int n)
{
    int minval=arr[0];

    int maxdiff = arr[1]-arr[0];

    for(int i=1; i<n; i++)
    {
        maxdiff = max(maxdiff, arr[i]-minval);

        minval = min(minval, arr[i]);
    }

    return maxdiff;
}

int main()
{
    int arr[] = {2,3,10,6,4,8,1};

    cout<<maxDifference(arr, 7)<<endl;
}