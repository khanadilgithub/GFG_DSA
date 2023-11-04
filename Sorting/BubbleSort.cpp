#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        bool swaped=false;
        for(int j=0; j<n-(i+1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swaped = true;
            }
        }
        if(!swaped)
        {
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,7,9,2,5};

    BubbleSort(arr, 5);
}