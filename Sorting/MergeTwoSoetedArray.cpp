#include<iostream>
#include<math.h>
using namespace std;

//Method1 is merge both array in temp array an sort using STL sort function

//Method2

void SortedArrayMerge(int arr1[], int arr2[], int n1, int n2)
{
    int i=0, j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else
        {
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    while(i<n1) 
    {
        cout<<arr1[i]<<" ";
    }
    while(j<n2) 
    {
        cout<<arr2[j]<<" ";
        j++;
    }

    cout<<endl;
}

int main()
{
    int arr1[] = {10,20,30,50};
    int arr2[] = {5,25,45,50,100};

    SortedArrayMerge(arr1,arr2,4,5);
}