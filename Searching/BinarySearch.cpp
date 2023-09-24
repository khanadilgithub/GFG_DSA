#include<iostream>
#include<math.h>
using namespace std;

int binarySearch(int arr[], int n, int elm)
{
    int lp=0,rp=n-1;

    while(lp<=rp)
    {
        int mid=(lp+rp)/2;
        
        if(arr[mid]==elm) 
          return mid;
        
        else if(arr[mid]>elm)
          rp=mid-1;

        else 
          lp=mid+1;
    }

    return -1;
}

//Recursive Binary search

int recBinarySearch(int arr[], int lp, int rp, int elm)
{
    int mid=(lp+rp)/2;

    if(lp>rp) return -1;

    if(arr[mid]==elm) 
      return mid;

    else if(arr[mid]>elm)
      return recBinarySearch(arr,lp,mid-1,elm);

    else 
      return recBinarySearch(arr,mid+1,rp,elm);
}

int main()
{
    int arr1[] = {5,15,25};

    int arr2[] = {5,10,15,25,35};

    cout<<binarySearch(arr1,3,25)<<endl;

    cout<<binarySearch(arr2,5,20)<<endl;

    cout<<recBinarySearch(arr1,0,2,25)<<endl;

    cout<<recBinarySearch(arr2,0,4,20)<<endl;
}