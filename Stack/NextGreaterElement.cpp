#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

//Naive Solution
void nextGreaterElm(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int j=i+1;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]>arr[i])
            {
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==n)
        {
            cout<<-1<<" ";
        }
    }
    cout<<endl;
}

//Efficient Solution

void nextGreaterElement(int arr[], int n)
{
    stack<int> st;
    st.push(arr[n-1]);

    for(int i=n-1; i>=0; i--)
    {
        while(!st.empty() && arr[i]>=st.top())
        {
            st.pop();
        }
        if(st.empty())
        {
            cout<<-1<<" ";
        }
        else
        {
            cout<<st.top()<<" ";
        }
        st.push(arr[i]);
    }
    cout<<endl;
}

int main()
{
    int arr[] = {5,15,10,8,6,12,9,18};

    nextGreaterElm(arr, 8);

    nextGreaterElement(arr, 8);
}