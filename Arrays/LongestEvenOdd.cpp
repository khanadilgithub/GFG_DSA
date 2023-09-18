#include<iostream>
#include<math.h>
using namespace std;

int longestevenOdd(int arr[], int n)
{
    int res=1;
    int curmx=1;

    for(int i=1; i<n; i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
        {
            curmx++;
            res=max(res,curmx);
        }
        else 
        {
            curmx=1;
        }
    }

    return res;
}

int main()
{
    int arr[] = {5,10,20,6,3,8};

    cout<<longestevenOdd(arr, 6)<<endl;
}