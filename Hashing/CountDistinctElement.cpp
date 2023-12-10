#include<iostream>
#include<unordered_set>
#include<math.h>
using namespace std;

//Naive Solution

int countDistinctElm(int arr[], int n)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        bool found=false;
        for(int j=0;j<i; j++)
        {
            if(arr[i]==arr[j])
            {
                found=true;
                break;
            }
        }
        if(!found)
        {
            res++;
        }
    }
    return res;
}

//Efficent Solution using set

int countDistinctElem(int arr[], int n)
{
    unordered_set<int> st;

    for(int i=0; i<n; i++)
    {
        st.insert(arr[i]);
    }
    return st.size();
}

int countDistinctElemnt(int arr[], int n)
{
    unordered_set<int> st(arr, arr+n);

    //st.insert(arr, arr+n); this also works

    return st.size();
}


int main()
{
    int arr[] = {10,20,10,20,30,40,40,50,60,60};
    int n=10;
    cout<<"No of distinct elements are: "<<countDistinctElem(arr, n)<<endl;

    cout<<"No of distinct elements are: "<<countDistinctElm(arr, n)<<endl;

    cout<<"No of distinct elements are: "<<countDistinctElemnt(arr, n)<<endl;
}