#include<iostream>
#include<unordered_set>
#include<math.h>
using namespace std;

//Naive Solution
bool subarrayWithGivenSum(int arr[], int n, int sum)
{
    for(int i=0; i<n; i++)
    {
        int cursum=0;
        for(int j=i; j<n; j++)
        {
            cursum+=arr[j];
            if(cursum==sum)
            {
                return true;
            }
        }
    }
    return false;
}

//Efficient Solution

bool subArrayWithGivenSum(int arr[], int n, int sum)
{
    int prefixsum=0;
    unordered_set<int> st;
    for(int i=0; i<n; i++)
    {
        prefixsum+=arr[i];

        if(prefixsum==0)
        {
            return true;
        }
        if(st.find(prefixsum-sum)!=st.end())
        {
            return true;
        }
        st.insert(prefixsum);
    }
    return false;
}


int main()
{
    int arr[] = {5,8,6,13,3,-1};

    int sum=22;

    cout<<subarrayWithGivenSum(arr,6, sum)<<endl;

    cout<<subArrayWithGivenSum(arr,6, sum)<<endl;

}