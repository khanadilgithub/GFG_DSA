#include<iostream>
#include<math.h>
using namespace std;

//Nvaive solution

int indxOfLstOcuurnc(int arr[], int n, int elm)
{
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]==elm)
        {
            return i;
        }
    }
    return -1;
}

//Recursive solution

int indxLastOccurRec(int arr[], int lp, int rp, int elm)
{
    if(lp>rp) return -1;

    int mid=(lp+rp)/2;

    if(elm>arr[mid])
    {
        return indxLastOccurRec(arr, mid+1, rp, elm);
    }
    else if(elm<arr[mid])
    {
        return indxLastOccurRec(arr,lp, mid-1, elm);
    }
    else 
    {
        if(mid==rp || arr[mid+1]!=arr[mid])
        {
            return mid;
        }
        else 
        {
            return indxLastOccurRec(arr, mid+1, rp, elm);
        }
    }
}

//Itrative solution

int indxLastOccurence(int arr[], int n, int elm)
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
            if(mid==n-1 || arr[mid+1]!=elm)
            {
                return mid;
            }
            else
            {
                lp=mid+1;
            }

        }

    }

    return -1;
}

int main()
{
    int arr[] = {10,15,20,20,40,40};

    int arr1[] = {5,8,8,10,10};

    int arr2[] = {8,10,10,12};

    cout<<indxOfLstOcuurnc(arr, 6, 20)<<endl;

    cout<<indxOfLstOcuurnc(arr1, 5, 10)<<endl;

    cout<<indxOfLstOcuurnc(arr2, 4, 7)<<endl;

    cout<<indxLastOccurence(arr, 6, 20)<<endl;

    cout<<indxLastOccurence(arr1, 5, 10)<<endl;

    cout<<indxLastOccurence(arr2, 4, 7)<<endl;

    cout<<indxLastOccurRec(arr, 0, 5, 20)<<endl;

    cout<<indxLastOccurRec(arr1, 0, 4, 10)<<endl;

    cout<<indxLastOccurRec(arr2, 0, 3, 17)<<endl;

}