#include<iostream>
#include<math.h>
using namespace std;

void Merge(int arr[], int lw, int md, int hi)
{
    int n1=(md-lw)+1;
    int left[n1] = {0};
    int n2= hi-md;
    int right[n2] = {0};

    for(int i=0; i<n1; i++)
    {
        left[i]=arr[lw+i];
    }

    for(int i=0; i<n2; i++)
    {
        right[i]=arr[md+(i+1)];
    }

    int i=0, j=0, k=lw;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1) 
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2) 
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int lp, int rp)
{
    if(rp>lp)
    {
        int mp=lp+(rp-lp)/2;

        mergeSort(arr, lp, mp);
        mergeSort(arr, mp+1, rp);

        Merge(arr, lp, mp, rp);
    }
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {10,5,30,15,7};
    int low=0;
    int hi=4;

    cout<<" Array before merge sort: ";
    printArray(arr,5);

    mergeSort(arr, low, hi);

    cout<<" Array after merge sort: ";
    printArray(arr,5);
}