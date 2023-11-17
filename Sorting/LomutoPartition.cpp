#include<iostream>
#include<math.h>
using namespace std;

int lomutoPartition(int arr[], int n, int p)
{
    int pvt=arr[p];
    int lp=-1;
    swap(arr[n-1], arr[p]);

    for (int i=0; i<n-1; i++)
    {
        if(arr[i]<pvt)
        {
            swap(arr[++lp], arr[i]);
        }
    }
    swap(arr[++lp], arr[n-1]);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return lp;
}

int main()
{
    int arr[] ={10,80,30,90,40,50,70};

    int p=6;

    cout<<"Partion index is: "<<lomutoPartition(arr, 6, p)<<endl;

}