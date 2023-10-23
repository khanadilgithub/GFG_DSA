#include<iostream>
#include<math.h>
using namespace std;
//Naive Solution

bool FindPair(int arr[], int n, int sum)
{
    for (int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((arr[i]+arr[j])==sum) return true;
        }
    }
    return false;
}

//Efficient approach

bool FindPairTwoPonter(int arr[], int n, int sum)
{
    int lp=0, rp=n-1;

    while(lp<rp)
    {
        if((arr[lp]+arr[rp])==sum)
        {
            return true;
        }
        else if ((arr[lp]+arr[rp])>sum)
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

int main()
{
    int arr[] = {2,5,8,12,30};

    int sum=17;

    cout<<FindPair(arr, 5, 17)<<endl;

    cout<<FindPairTwoPonter(arr, 5, 17)<<endl;
}