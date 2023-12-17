#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<math.h>
using namespace std;

//Naive solution
int longestConsSubsequence(int arr[], int n)
{
    sort(arr, arr+n);
    int cnt=1, res=1;

    for(int i=1; i<n; i++)
    {
        if(arr[i]==arr[i-1]+1)
        {
            cnt++;
        }
        else if(arr[i]!=arr[i-1])
        {
            res=max(res, cnt);
            cnt=1;
        }
    }
    return max(res, cnt);
}

//Efficient Solution

//Step 1: Insert all elements into a hasmap or hashset

//step 2: find the results using the 2N lookups 

int longestConsSubsequences(int arr[], int n)
{
    //insetion of all elements in a hashset
    unordered_set<int> st(arr, arr+n);
    int res=1;

   //2N lookups method to find the elements
    for (auto val: st)
    {
        if(st.find(val-1)==st.end())
        {
            int cur=1;
            while(st.find(val+cur)!=st.end())
            {
                cur++;
                res=max(res,cur);
            }
        }
    }
    return res;
}

int main()
{
    int arr1[] = {1,9,3,4,2,20};

    int arr2[] = {8,20,7,30};

    int arr3[] = {20,30,40,50,60};

    cout<<"longest cons subsequence is: "<<longestConsSubsequence(arr1,6)<<endl;

    cout<<"longest cons subsequence is: "<<longestConsSubsequence(arr2,4)<<endl;

    cout<<"longest cons subsequence is: "<<longestConsSubsequence(arr3,5)<<endl;


    cout<<"longest cons subsequence is: "<<longestConsSubsequences(arr1,6)<<endl;

    cout<<"longest cons subsequence is: "<<longestConsSubsequences(arr2,4)<<endl;

    cout<<"longest cons subsequence is: "<<longestConsSubsequences(arr3,5)<<endl;


}