#include<iostream>
#include<math.h>
using namespace std;

//Method 1 

int searchInSortedArray(int arr[], int n, int elm)
{
    int lp=0, rp=n-1;

    while(lp<=rp)
    {
        int mid = (lp+rp)/2;

        if(arr[mid]==elm)
        {
            return mid;
        }
        else if (arr[mid]>=elm)
        {
           if((arr[lp]<elm) || (arr[lp]>arr[mid]))
           {
               rp=mid-1;
           }
           else
           {
               lp=mid+1;
           }
        }
        else 
        {
            if((arr[rp]>elm) || (arr[rp]<arr[mid]))
           {
               lp=mid+1;
           }
           else
           {
               rp=mid-1;
           }

        }
    }

    return -1;

}

//Method 2 better tested 

int SearchInSortedArray(int arr[], int n, int elm)
{
    int lp=0, rp=n-1;

    while(lp<=rp)
    {
        int mid = (lp+rp)/2;

        if(arr[mid]==elm)
        {
            return mid;
        }
        else if (arr[lp]<=arr[mid])
        {
           if((elm>=arr[lp]) && (arr[mid]>elm))
           {
               rp=mid-1;
           }
           else
           {
               lp=mid+1;
           }
        }
        else 
        {
            if((arr[rp]>=elm) && (elm>arr[mid]))
           {
               lp=mid+1;
           }
           else
           {
               rp=mid-1;
           }

        }
    }
    return -1;
}







int main()
{
    int arr[] = {10,20,40,60,5,8};

    cout<<searchInSortedArray(arr,6,5)<<endl;

    cout<<SearchInSortedArray(arr,6,5)<<endl;
}