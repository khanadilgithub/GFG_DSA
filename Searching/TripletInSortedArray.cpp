#include<iostream>
#include<math.h>
using namespace std;
//Naive Solution

bool FindTriplet(int arr[], int n, int sum)
{
    for (int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if((arr[i]+arr[j]+arr[k])==sum) return true;
            }
            
        }
    }
    return false;
}

//Efficient approach

bool FindPair(int arr[], int lp, int rp, int psum)
{
    while(lp<rp)
    {
        if((arr[lp]+arr[rp])==psum)
        {
            return true;
        }
        else if ((arr[lp]+arr[rp])>psum)
        {
            rp--;
        }
        else
        {
            lp++;
        }
    }

    return false;
}

bool FindTriplets(int arr[], int n, int sum)
{
    for(int i=0; i<n-2; i++)
    {
        if(FindPair(arr, i+1, n-1, sum-arr[i]))
        {
            return true;
        }
    }
    return false;
}


int main()
{
    int arr[] = {2,5,8,12,30};

    cout<<FindTriplet(arr, 5, 22)<<endl;

    int arr1[] = {2,5,10,15,18};

    cout<<FindTriplets(arr1, 5, 33)<<endl;
}