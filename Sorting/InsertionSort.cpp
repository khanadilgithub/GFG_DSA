#include<iostream>
#include<math.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int j=i;
        while(arr[j-1]>arr[j] && j>0)
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Modifiying the solution to reduce the no of swapor memory wirte 

void InsertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int keyval=arr[i];
        int j=i-1;
        while(keyval<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=keyval;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {20,5,40,60,10,30};

    insertionSort(arr,6);

    InsertionSort(arr,6);
}