#include<iostream>
#include<math.h>
using namespace std;

void matrix()
{
    int m=3, n=3;
    int arr[m][n] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}

void doublePointerArray()
{
    int m=3, n=3;

    int **arr;

    arr = new int* [m];

    int * arr1[m];

    for(int i=0; i<m; i++)
    {
        arr[i] = new int[n];

        arr1[i] = new int[n];

        for(int j=0; j<n; j++)
        {
            arr[i][j] = i+j;
            cout<<arr[i][j]<<" ";

            arr1[i][j] = i+j;
            cout<<arr1[i][j]<<" ";
        }
    }
}

int main()
{
    matrix();

    cout<<endl;

    doublePointerArray();
}