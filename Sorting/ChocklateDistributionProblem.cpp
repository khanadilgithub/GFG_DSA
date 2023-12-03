#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int chocklateDistibution(int arr[], int n, int m)
{
    sort(arr, arr+n);

    int mindiff=0;
    int curdiff = arr[m-1]-arr[0];

    for(int i=1; i<n-m; i++)
    {
        mindiff=min(curdiff, (arr[i+m-1]-arr[i]));
    }
    return mindiff;
}

int main()
{
    int arr[] = {7,3,2,4,9,12,56};

    int m=3;

    cout<<chocklateDistibution(arr, 7, m)<<endl;
}