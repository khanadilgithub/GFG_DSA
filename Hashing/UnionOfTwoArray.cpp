#include<iostream>
#include<unordered_set>
#include<math.h>
using namespace std;

int unionofArray(int arr1[], int arr2[], int m, int n)
{
    unordered_set<int> st(arr1, arr1+m);
    for(int i=0; i<n; i++)
    {
        st.insert(arr2[i]);
    }
    return st.size();
}

int main()
{
    int arr1[]={15,20,5,15};
    int arr2[]={15,15,15,20,10};

    cout<<"No of element: "<<unionofArray(arr1,arr2,4,5)<<endl;
}