#include<iostream>
#include<math.h>
using namespace std;

void MergeFunction(int arr[], int lw, int md, int hi)
{
    int n1=(md-lw)+1;
    int left[n1] = {0};
    int n2= hi-md;
    int right[n2] = {0};

    for(int i=0; i<n1; i++)
    {
        left[i]=arr[i];
    }

    for(int i=0; i<n2; i++)
    {
        right[i]=arr[md+(i+1)];
    }

    int i=0, j=0, k=0;

    while(i<(md+1) && j<=hi)
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

    for(int i=0; i<=hi; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {10,15,20,11,30};
    int low=0;
    int mid=2;
    int hi=4;

    MergeFunction(arr, low, mid, hi);
}