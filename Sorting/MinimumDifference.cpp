#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int minDiff(int arr[], int n)
{
    int ans=INT32_MAX;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            ans=min(ans,abs(arr[j]-arr[i]));
        }
    }
    return ans;
}

//Efficent Solution
int minDifference(int arr[], int n)
{
    int ans=INT32_MAX;

    sort(arr, arr+n);

    for(int i=1; i<n; i++)
    {
        ans=min(ans,abs(arr[i]-arr[i-1]));

    }
    return ans;
}


int main()
{
    int arr[] = {10,8,1,4};

    cout<<"Minimum Diffrence is: "<<minDiff(arr, 4)<<endl;

    cout<<"Minimum Diffrence is: "<<minDifference(arr, 4)<<endl;

}