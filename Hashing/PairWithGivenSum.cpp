#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;

//Naive Solution
bool pairSum(int arr[], int n, int sum)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((arr[i]+arr[j])==sum)
            {
                return true;
            }
        }
    }
    return false;
}

//Efficient Solution

bool pairSumE(int arr[], int n, int sum)
{
    unordered_map<int, int> mp;

    for(int i=0; i<n; i++)
    {
        if(mp.find(arr[i])==mp.end())
        {
            mp[sum-arr[i]]++;
        }
        else 
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr1[] = {3,2,8,15,-8};

    int sum1=17;

    int arr2[]= {2,1,6,3};

    int sum2=6;

    cout<<pairSum(arr1, 5, sum1)<<endl;

    cout<<pairSum(arr2, 4, sum2)<<endl;

    cout<<pairSumE(arr1, 5, sum1)<<endl;

    cout<<pairSumE(arr2, 4, sum2)<<endl;
}