#include<iostream>
#include<unordered_set>
#include<math.h>
using namespace std;

//Naive Solution

void intersectionOfArrays(int arr1[], int arr2[], int m, int n)
{
    for(int i=0; i<m; i++) 
    {
        bool found=false;
        for(int j=0; j<m; j++)
        {
            if(arr1[i]==arr2[j])
            {
                found=true;
            }
        }
        if(found)
        {
            cout<<arr1[i]<<" ";
        }
    }
}

//Efficient Solutions

void intersectionOfArray(int arr1[], int arr2[], int m, int n)
{
    unordered_set<int> st (arr2, arr2+n);

    for(int i=0; i<m; i++)
    {
        if(st.find(arr1[i])!=st.end())
        {
            cout<<arr1[i]<<" ";
        }
    }
}

int main()
{
    int arr1[] = {10,20,30};
    int arr2[] = {30,10};
    intersectionOfArrays(arr1, arr2, 3,2);
    cout<<endl;
    intersectionOfArray(arr1, arr2, 3,2);
}