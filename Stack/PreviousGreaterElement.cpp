#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

//Naive Solution
void prevGreaterElm(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int j=i-1;
        for(j=i-1; j>=0; j--)
        {
            if(arr[j]>arr[i])
            {
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==-1)
        {
            cout<<j<<" ";
        }
    }
    cout<<endl;
}

//Efficient Solution

void prevGreaterElement(int arr[], int n)
{
    stack<int> st;
    st.push(arr[0]);

    for(int i=0; i<n; i++)
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
    int arr[] = {15,10,18,12,4,6,2,8};

    prevGreaterElm(arr, 8);

    prevGreaterElement(arr, 8);
}