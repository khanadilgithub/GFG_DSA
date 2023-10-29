#include<iostream>
#include<map>
#include<algorithm>
#include<math.h>
using namespace std;

//Naive Soluton

int rptngElm(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1;
}

//better Soln Method1

int repeatingElem(int arr[], int n)
{

    sort(arr, arr+n);

    for(int i=0; i<n-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
    return -1;
}

//better Soln Method2
int repeatingElement(int arr[], int n)
{
    map<int, int> elm;

    for(int i=0; i<n; i++)
    {
        elm[arr[i]]++;
        if(elm[arr[i]]>1)
        return arr[i];
    }
    return -1;
}

//better Soln Method3
int repeatingElements(int arr[], int n)
{
    int repeated[n] = {false};

    for(int i=0; i<n; i++)
    {
        if(repeated[arr[i]])
        {
            return arr[i];
        }
        repeated[arr[i]]=true;
    }
    return -1;
}

int main()
{
    int arr[] = {0,2,1,3,2,2};

    int arr1[] = {1,2,3,0,3,4,5};

    cout<<rptngElm(arr,6)<<endl;

    cout<<rptngElm(arr1,7)<<endl;

    cout<<repeatingElem(arr,6)<<endl;

    cout<<repeatingElem(arr1,7)<<endl;

    cout<<repeatingElement(arr,6)<<endl;

    cout<<repeatingElement(arr1,7)<<endl;

    cout<<repeatingElements(arr,6)<<endl;

    cout<<repeatingElements(arr1,7)<<endl;
}