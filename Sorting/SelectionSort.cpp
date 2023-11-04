#include<iostream>
#include<math.h>
using namespace std;

void SelectionSort(int arr[], int n)
{

    for(int i=0; i<n-1; i++)
    {
        int minidx=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minidx])
            {
                minidx=j;
            }
        }
        swap(arr[i], arr[minidx]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {10,5,8,20,2,18};

    SelectionSort(arr, 6);
}