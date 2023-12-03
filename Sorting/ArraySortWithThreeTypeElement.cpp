#include<iostream>
#include<math.h>
using namespace std;

//Naive solution
void sortElem(int arr[], int n)
{
    int temp[n] = {0};

    int indx=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            temp[indx++]=arr[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            temp[indx++]=arr[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]==2)
        {
            temp[indx++]=arr[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        arr[i]=temp[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Efficient Solution
void sortElement(int arr[], int n)
{
    int low=0, mid=0, hi=n-1;

    while(mid<=hi)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid++], arr[low++]);
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[hi--]);
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {0,1,2,1,1,2};
    sortElem(arr,6);
    sortElement(arr,6);
}