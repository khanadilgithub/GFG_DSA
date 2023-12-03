#include<iostream>
#include<math.h>
using namespace std;

//Naive solution
void sortElem(int arr[], int n)
{
    int temp[n] = {0};

    int indx=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            temp[indx++]=arr[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            temp[indx++]=arr[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        arr[i]=temp[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Method1 using Lomudo partition
void sortElement(int arr[], int n)
{
    int indx=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            if(i!=indx)
            {
                swap(arr[indx], arr[i]);
            }
            indx++;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Method2 using Hoare's partiion
int sortElements(int arr[], int n)
{
    int lp=-1, rp=n;
    while(true)
    {
        do
        {
            lp++;
        }while(arr[lp]<0);

        do
        {
            rp--;
        }while(arr[rp]>0);

        if(lp>=rp)
        {
            for(int i=0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            return rp;
        }

        swap(arr[lp], arr[rp]);
    }
}

int main()
{
    int arr[] = {-12,18,-10,15};
    sortElem(arr,4);
    sortElement(arr, 4);
    sortElements(arr,4);
}