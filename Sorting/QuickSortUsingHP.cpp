#include<iostream>
#include<math.h>
using namespace std;

int hoarePartition(int arr[], int l, int h)
{
    int lp=l-1, rp=h+1;
    int pvt=arr[l];
    while(true)
    {
        do
        {
            lp++;
        }while(arr[lp]<pvt);

        do
        {
            rp--;
        }while(arr[rp]>pvt);

        if(lp>=rp)
        {
            return rp;
        }

        swap(arr[lp], arr[rp]);
    }
}

void quickSortHP(int arr[], int lw, int hi)
{
    if(lw<hi)
    {
        int pt = hoarePartition(arr, lw, hi);

        quickSortHP(arr, lw, pt);

        quickSortHP(arr, pt+1, hi);
    }
}


int main()
{
    int arr[] = {2,8,4,7,9,3,10,5,1,6};

    quickSortHP(arr, 0, 9);

    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}