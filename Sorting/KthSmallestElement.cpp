#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

//Navie solution
int kthSmallestElem(int arr[], int n, int k)
{
    sort(arr, arr+n);
    return arr[k-1];

}

//Efficient Solution using partition

int partition(int arr[], int lw, int hi)
{
    int pvt=arr[hi];
    int lp=lw-1;

    for (int i=lw; i<=hi-1; i++)
    {
        if(arr[i]<pvt)
        {
            swap(arr[++lp], arr[i]);
        }
    }
    swap(arr[++lp], arr[hi]);
    
    return lp;
}

int kthSmallestElmnt(int arr[], int n, int k)
{
    int lw=0, hi=n-1;

    while(lw<=hi)
    {
        int p = partition(arr, lw, hi);

        if(p==k-1)
        {
            return arr[p];
        }
        else if(p>k-1)
        {
            hi=p-1;
        }
        else
        {
            lw=p+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10,3,5,20};
    int k=2;

    cout<<"Second Smallest Element: "<<kthSmallestElem(arr, 4, 2)<<endl;

    cout<<"Second Smallest Element: "<<kthSmallestElmnt(arr, 4, 2)<<endl;
}