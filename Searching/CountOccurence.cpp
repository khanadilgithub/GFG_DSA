#include<iostream>
#include<math.h>
using namespace std;

//Nvaive solution

int CountOccurence(int arr[], int n, int elm)
{
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==elm)
        {
            cnt++;
        }
    }
    return cnt;
}

//Efficient Solution

//first occurnec function
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

//Last occurence 

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


int countOccurence(int arr[], int n, int elm)
{
    int fstocr=indxFirstOccurence(arr, n, elm);

    if(fstocr==-1)
    {
        return 0;
    }

    int lstocr=indxLastOccurence(arr,n,elm);

    return (lstocr-fstocr)+1;
}

int main()
{
    int arr[] = {10,10,20,20,20,20,40,40};

    cout<<countOccurence(arr, 8, 20);

}