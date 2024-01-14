#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

//Naive Solution

void stockSpan(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int count=0;
        for(int j=i; j>=0; j--)
        {
            if(arr[i]<arr[j])
            {
                break;
            }
            count++;
        }
        cout<<count<<" ";
    }
    cout<<endl;
}

//Efficinet Solution

void stockSpanProblem(int arr[], int n)
{
    //write logic here
    stack<int> st;
    st.push(0);

    for(int i=0; i<n; i++)
    {
        while(!st.empty() && arr[i]>=arr[st.top()])
        {
            st.pop();
        }
        if(st.empty())
        {
            cout<<i+1<<" ";
        }
        else
        {
            cout<<i-st.top()<<" ";
        }
        st.push(i);
    }
    cout<<endl;
}

int main()
{
    int arr[] = {13,15,12,14,16,8,6,4,10,30};
    stockSpan(arr,10);

    stockSpanProblem(arr,10);
}