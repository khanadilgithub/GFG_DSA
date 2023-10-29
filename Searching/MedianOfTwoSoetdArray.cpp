#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

//Naive Solution

int FindMedian(int arr1[], int arr2[], int n1, int n2)
{
    int size=n1+n2;
    int temp[size] = {0};

    for(int i=0; i<size; i++)
    {
        if(i<n1)
        {
            temp[i]=arr1[i];
        }
        else
        {
            temp[i]=arr2[i-n1];
        }
    }
    sort(temp, temp+size);

    if(size%2==0)
    {
        return (double)((double)temp[size/2]+(double)temp[(size/2)-1])/2.0;
    }
    else
    {
        return temp[size/2];
    }
}

//Efficent Solution 

//will add later

int main()
{
    int arr1[] = {10,20,30,40,50};
    int arr2[] = {5,15,25,35,45};

    cout<<FindMedian(arr1, arr2, 5,5)<<endl;

}