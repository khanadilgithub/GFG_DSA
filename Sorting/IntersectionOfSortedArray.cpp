#include<iostream>
#include<math.h>
using namespace std;

//Naive or Brute force solution
void intersectionOfarrays(int arr1[], int arr2[], int n1, int n2)
{
    for(int i=0; i<n1; i++)
    {
        if(i>0 && arr1[i]==arr1[i-1])
        {
            continue;
        }
        for(int j=0; j<n2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
}

//Efficent Solution 

void intersectionOfarray(int arr1[], int arr2[], int n1, int n2)
{
    int i=0, j=0;
    while(i<n1 && j<n2)
    {
        if(i>0 && arr1[i-1]==arr1[i])
        {
            i++;
            continue;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else 
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    cout<<endl;
}


int main()
{
    int arr1[] = {1,20,20,40,60};

    int arr2[] = {2,20,20,40,50};

    intersectionOfarrays(arr1, arr2, 5, 5);

    intersectionOfarray(arr1, arr2, 5, 5);
}