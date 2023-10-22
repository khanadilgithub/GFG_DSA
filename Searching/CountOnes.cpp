#include<iostream>
#include<math.h>
using namespace std;

//Naive solution

int CountOnes(int arr[], int n)
{
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            cnt++;
        }
    }
    return cnt;
}

//Efficient Solution

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

int countOnes(int arr[], int n)
{
    int fstindx=indxFirstOccurence(arr, n , 1);

    if(fstindx==-1)
    {
        return 0;
    }

    return n-fstindx;
}

int main()
{
    int arr[] = {0,0,0,0,0,1,1,1,1,1,1,1};

    cout<<countOnes(arr, 12);

}