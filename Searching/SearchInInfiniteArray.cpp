#include<iostream>
#include<math.h>
using namespace std;


//Naive Solution

int searchIndx(int arr[], int num)
{
    int i=0;

    while(arr[i]<=num)
    {
        if(arr[i]==num)
        {
            return i;
        }
        i++;
    }

    return -1;
}

//Efficient Solution

int binarySearch(int arr[], int lp, int rp, int elm)
{
    while(lp<=rp)
    {
        int mid=(lp+rp)/2;
        
        if(arr[mid]==elm) 
          return mid;
        
        else if(arr[mid]>elm)
          rp=mid-1;

        else 
          lp=mid+1;
    }

    return -1;
}

int searchIndex(int arr[], int num)
{
    if(arr[0]==num) return 0;

    int i=1;

    while(arr[i]<num)
    {
        i=i*2;
    }

    if(arr[i]==num) return i;

    return binarySearch(arr, i/2+1, i, num);
}

int main()
{
    int arr[] = {1,10,15,20,40,60,80,100,200,500,600,800,1000};

    cout<<searchIndx(arr,100)<<endl;

    cout<<searchIndex(arr, 90)<<endl;

    cout<<searchIndx(arr,100)<<endl;

    cout<<searchIndex(arr, 90)<<endl;

}