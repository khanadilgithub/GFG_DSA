#include<iostream>
#include<math.h>
using namespace std;

bool IsSorted(int arr[], int n)
{
    for (int i=1; i<n; i++)
    {
        if(arr[0]<arr[n-1])
        {
            if(arr[i]<arr[i-1]) return false; //Incresing order sorted 
        }
        else
        {
            if(arr[i]>arr[i-1]) return false; //Decreasing order sorted
        }
    }

    return true;
}

int main()
{
    int arr[] = {8,10,12,15};

    int arr1[] = {8,12,10,11};

    int arr2[] = {100, 50, 20, 10};

    cout<<IsSorted(arr,4)<<endl;

    cout<<IsSorted(arr1,4)<<endl;

    cout<<IsSorted(arr2,4)<<endl;
}