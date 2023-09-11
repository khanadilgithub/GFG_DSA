#include<iostream>
#include<math.h>
using namespace std;

void reverse(int arr[], int lft, int rgt)
{
    int lftindx=lft, rgtindx=rgt;

    while(lftindx<rgtindx)
    {
        swap(arr[lftindx], arr[rgtindx]);
        lftindx++;
        rgtindx--;
    }

}

void rotatebyD(int arr[], int n, int d)
{
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};

    rotatebyD(arr,10,3);
}