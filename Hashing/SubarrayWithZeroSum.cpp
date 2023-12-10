#include<iostream>
#include<unordered_set>
#include<math.h>
using namespace std;

//Naive Solution
bool subarrayWithZeroSum(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int cursum=0;
        for(int j=i; j<n; j++)
        {
            cursum+=arr[j];
            if(cursum==0)
            {
                return true;
            }
        }
    }
    return false;
}

//Efficient Solution

bool subArrayWithZeroSum(int arr[], int n)
{
    int prefixsum=0;
    unordered_set<int> st;
    for(int i=0; i<n; i++)
    {
        prefixsum+=arr[i];
        if(st.find(prefixsum)!=st.end())
        {
            return true;
        }

        if(prefixsum==0)
        {
            return true;
        }

        st.insert(prefixsum);
    }
    return false;
}

int main()
{
    int arr[] = {1,4,13,-3,-10,5};

    cout<<subarrayWithZeroSum(arr,6)<<endl;

    cout<<subArrayWithZeroSum(arr,6)<<endl;

}