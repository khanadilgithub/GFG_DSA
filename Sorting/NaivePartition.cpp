#include<iostream>
#include<math.h>
using namespace std;
int naivePartition(int arr[], int n, int p)
{
    int temp[n] = {0};
    int pvt=arr[p];
    int indx=0, ans=0;
    swap(arr[n-1], arr[p]);

    for(int i=0; i<n; i++)
    {
        if(arr[i]<=pvt)
        {
            temp[indx++]=arr[i];
        }
    }
    ans=indx-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>pvt)
        {
            temp[indx++]=arr[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    return ans;
}
int main()
{
    int arr[] = {3,8,6,12,10,7};

    int p=5;

    cout<<"Partion index is: "<<naivePartition(arr, 6, p)<<endl;
}