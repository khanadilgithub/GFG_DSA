#include<iostream>
#include<math.h>
using namespace std;

int lomutoPartition(int arr[], int lw, int hi)
{
    int pvt=arr[hi];
    int lp=lw-1;

    for (int i=lw; i<=hi-1; i++)
    {
        if(arr[i]<pvt)
        {
            swap(arr[++lp], arr[i]);
        }
    }
    swap(arr[++lp], arr[hi]);
    
    return lp;
}

void quickSortLP(int arr[], int lw, int hi)
{
    if(lw<hi)
    {
        int pt= lomutoPartition(arr, lw, hi);

        quickSortLP(arr,lw, pt-1);

        quickSortLP(arr, pt+1, hi);
    }
}

int main()
{
    int arr[] = {10,80,30,90,40,50,70};

    quickSortLP(arr, 0, 6);

    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}