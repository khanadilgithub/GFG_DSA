#include<iostream>
#include<math.h>
using namespace std;

//Naive solution

int maxandvalue(int arr[], int n)
{
    int res=0;

    for (int i=0; i<n; i++)
    {
       for(int j=i+1; j<n; j++)
       {
          res=max(res, arr[i]&arr[j]);
       }
    }

    return res;
}

//Efficient approach using bitwise operator
int maxandvalpair(int arr[], int n)
{
    //logic need to be implimented 
    cout<<"Efficient logic implimentation pending printing dfault ";
    return 0;
}

int main()
{
    int arr[] = {4,8,6,2};
    int n =4;

    cout<<"Maximum and value = "<<maxandvalue(arr, n)<<endl;

    cout<<"Maximum and value = "<<maxandvalpair(arr, n);

}