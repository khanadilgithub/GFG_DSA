#include<iostream>
#include<math.h>
using namespace std;

//Naive Solution

bool SubarrayOfSum(int arr[], int n, int sum)
{
    for(int i=0; i<n; i++)
    {
        int cursum=0;

        for(int j=i; j<n; j++)
        {
            cursum+=arr[j];

            if(cursum==sum) return true;
        }
    }

    return false;
}

//Efficient Solution
int SubarrayofSum(int arr[], int n, int sum)
{
    int lp=0, rp=0;

    int cursum=0;

    for(int rp=0; rp<n; rp++)
    {
        cursum+=arr[rp];

        while(cursum>sum)
        {
            cursum-=arr[lp];
            lp++;
        }

        if(cursum==sum) return true;
    }

    return false;
}

int main()
{
    int arr[] = {4,8,12,5};
    int sum=17;

    //naive solution method 
    if(SubarrayOfSum(arr,4,sum)) 
         cout<<"Yes"<<endl;
    else 
         cout<<"No"<<endl;


    //eficent solution method (sliding window technique)
    if(SubarrayofSum(arr,4,sum)) 
         cout<<"Yes"<<endl;
    else 
         cout<<"No"<<endl;

}