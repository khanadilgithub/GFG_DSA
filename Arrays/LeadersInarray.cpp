#include<iostream>
#include<math.h>
using namespace std;

void leaders(int arr[], int n)
{
    int curlead=arr[n-1];
    cout<<curlead<<" ";
    for(int i=n-2; i>=0; i--)
    {
        if(arr[i]>curlead)
        {
            cout<<arr[i]<< " ";
            curlead=arr[i];
        }
    }

    cout<<endl;
}

int main()
{
    int arr[] = {7,10,4,10,6,5,2};

    leaders(arr,7);
}