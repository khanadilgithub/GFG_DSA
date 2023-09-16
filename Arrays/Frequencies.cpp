#include<iostream>
#include<math.h>
using namespace std;

//Method 1 using for loop

void Frequencies(int arr[], int n)
{
    int frq=1;
    for(int i=1; i<n; i++)
    {
        if(arr[i-1]==arr[i])
        {
            frq++;
        }
        else
        {
            cout<<arr[i-1]<<" "<<frq<<endl;
            frq=1;
        }
    }
    cout<<arr[n-1]<<" "<<frq<<endl;
}

//Metod 2 Using while loop

void frequencies(int arr[], int n)
{
    int freq=1;
    int i=1;

    while(i<n)
    {
        while(i<n && arr[i-1]==arr[i])
        {
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }

    if(n==1 || (arr[n-1]!=arr[n-2]))
    {
        cout<<arr[n-1]<<" "<<freq<<endl;
    }
}


int main()
{
    int arr[] = {10,10,10,40,30,30,50,50};
    Frequencies(arr,8);

    frequencies(arr,8);
}