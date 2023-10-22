#include<iostream>
#include<math.h>
using namespace std;

//Recursive solution

int indxFirstOccurRec(int arr[], int lp, int rp, int elm)
{
    if(lp>rp) return -1;

    int mid=(lp+rp)/2;

    if(elm>arr[mid])
    {
        return indxFirstOccurRec(arr, mid+1, rp, elm);
    }
    else if(elm<arr[mid])
    {
        return indxFirstOccurRec(arr,lp, mid-1, elm);
    }
    else 
    {
        if(mid==0 || arr[mid-1]!=arr[mid])
        {
            return mid;
        }
        else 
        {
            return indxFirstOccurRec(arr, lp, mid-1, elm);
        }
    }
}

//Itrative solution

int indxFirstOccurence(int arr[], int n, int elm)
{
    int lp=0, rp=n-1;

    int mid=0;

    while(lp<=rp)
    {
        mid=(lp+rp)/2;

        if (arr[mid]>elm)
        {
            rp=mid-1;
        }
        else if(arr[mid]<elm)
        {
            lp=mid+1;
        }
        else 
        {
            if(mid==0 || arr[mid-1]!=elm)
            {
                return mid;
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
    int arr[] = {1,10,10,10,20,20,40};

    int arr1[] = {10,20,3};

    int arr2[] = {15,15,15};

    cout<<indxFirstOccurence(arr, 7, 20)<<endl;

    cout<<indxFirstOccurence(arr1, 3, 15)<<endl;

    cout<<indxFirstOccurence(arr2, 3, 15)<<endl;

    cout<<indxFirstOccurRec(arr, 0, 6, 20)<<endl;

    cout<<indxFirstOccurRec(arr1, 0, 2, 15)<<endl;

    cout<<indxFirstOccurRec(arr2, 0, 2, 15)<<endl;
    
}