#include<iostream>
#include<math.h>
using namespace std;

/*
Functions to print two odd occuring number in an array
This fuction assuses that the array has atleast two element and has exactly two 
number occuring odd numberof time 

*/

void twooddoccuring(int arr[], int n)
{
    int temp=0, ans1=0, ans2=0;
    for (int i=0; i<n; i++)
    {
        temp=temp^arr[i];
    }

    int setbit= temp&(~(temp-1));  
    for(int i=0; i<n; i++)
    {
        if(arr[i]&setbit)
        {
            ans1=arr[i]^ans1;
        }
        else 
        {
            ans2=arr[i]^ans2;
        }
    }

    cout<< ans1 <<" "<<ans2<<endl;
}

int main()
{
    int arr[] = {12,23,34,12,12,23,12,45};
    int n=8;

    int arr1[] = {3,4,3,4,5,4,4,6,7,7};
    int n1 =10;

    int arr2 [] = {100,300};
    int n2=2;

    twooddoccuring(arr,n);

    twooddoccuring(arr1,n1);

    twooddoccuring(arr2,n2);
}