#include<iostream>
#include<math.h>
using namespace std;

void moveZeros(int arr[], int n)
{
    int count=0;

    for (int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }

    for (int j=0; j<n; j++) cout<<arr[j]<<" ";

    cout<<endl;
}

int main()
{
    int arr[] = {10,20,0,0,0,30,50,70,0,0,0,0,90};

    moveZeros(arr, 13);
}

