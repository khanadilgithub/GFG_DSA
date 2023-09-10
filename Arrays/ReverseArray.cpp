#include<iostream>
#include<math.h>
using namespace std;

void Reverse(int arr[], int n)
{
    int lftindx=0, rgtindx=n-1;

    while(lftindx<rgtindx)
    {
        swap(arr[lftindx], arr[rgtindx]);
        lftindx++;
        rgtindx--;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}



int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    Reverse(arr, 10);
}