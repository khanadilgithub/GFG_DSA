#include<iostream>
#include<math.h>
using namespace std;

int largestelm(int arr[], int n)
{
    int ans = 0;

    for (int i=1; i<n; i++)
    {
        if(arr[i]>arr[ans]) 
        {
            ans=i;
        }
    }

    return ans;
}

int main()
{
    int arr[] ={5,8,20,10};
    int n = 4;
    cout<<largestelm(arr,n);
}