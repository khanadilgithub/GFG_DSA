#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

//Brute force or Naive  Solution

void UnionOfArray(int arr1[], int arr2[], int n1, int n2)
{
    int temp[n1+n2] = {0};
    for(int i=0; i<n1; i++)
    {
        temp[i]=arr1[i];
    }

    for(int i=0; i<n2; i++)
    {
        temp[n1+i]=arr2[i];
    }

    sort(temp, temp+(n1+n2));

    for(int i=0; i<(n1+n2); i++)
    {
        if(i==0 || temp[i-1]!=temp[i])
        {
            cout<<temp[i]<<" ";
        }
    }
    cout<<endl;
}

//Efficient Solution 

void UnionofArrays(int arr1[], int arr2[], int n1, int n2)
{
    int i=0, j=0;

    while(i<n1 && j<n2)
    {
        if(i>0 && arr1[i-1]==arr1[i])//skipping the duplicate in first array
        {
            i++;
            continue;
        }
        if(j>0 && arr2[j-1]==arr2[j])//skipping the duplicated in second array
        {
            j++;
            continue;
        }
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else 
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n1) 
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<n2) 
    {
        cout<<arr2[j] << " ";
        j++;
    }
    cout<<endl;
}

int main()
{
    int arr1[] = {3,5,8};
    int arr2[] = {2,8,9,10,15};

    int arr3[] = {2,10,20,20,20};
    int arr4[]= {3,3,20,40};

    UnionOfArray(arr1,arr2, 3,5);

    UnionofArrays(arr1, arr2, 3,5);

    
    UnionOfArray(arr3,arr4, 5,4);

    UnionofArrays(arr3, arr4, 5,4);
}