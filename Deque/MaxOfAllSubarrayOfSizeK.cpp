#include<iostream>
#include<deque>
#include<math.h>
using namespace std;

//Naive Solution

void maxOfSizeKSubarrays(int arr[], int n, int k)
{
    for(int i=0; i<=n-k; i++)
    {
        int maxval=arr[i];
        for(int j=1; j<k; j++)
        {
            maxval=max(arr[i+j], maxval);
        }
        cout<<maxval<<" ";
    }
    cout<<endl;
}

//Efficient Solution

void maxOfSizeKSubarray(int arr[], int n, int k)
{
    deque<int> dq;

    for(int i=0; i<k; i++)
    {
        while(!dq.empty() && arr[i]>=arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k; i<n; i++)
    {
        cout<<arr[dq.front()]<<" ";//printing the max element of current window
        while(!dq.empty() && dq.front()<=i-k)
        {
            dq.pop_front(); //remoing the element which got out of the window
        }

        while(!dq.empty() && arr[i]>=arr[dq.back()])
        {
            dq.pop_back(); //removing lower elemnet which are useless
        }
        dq.push_back(i);
    }
    cout<<arr[dq.front()]<<" ";//printing the max element of last window
}

int main()
{
    int arr[] = {10,8,5,12,15,7,6};

    maxOfSizeKSubarrays(arr,7,3);

    maxOfSizeKSubarray(arr,7,3);
}