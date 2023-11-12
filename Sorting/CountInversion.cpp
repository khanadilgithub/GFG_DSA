#include<iostream>
#include<math.h>
using namespace std;
//Naive solution
int countInversion(int arr[], int n)
{
    int invs=0;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                invs++;
            }
        }
    }
    return invs;
}

//Efficient solution
int countAndMerge(int arr[], int lp, int mp , int rp)
{
    int n1=(mp-lp)+1;
    int left[n1] = {0};
    int n2= rp-mp;
    int right[n2] = {0};

    for(int i=0; i<n1; i++)
    {
        left[i]=arr[lp+i];
    }

    for(int i=0; i<n2; i++)
    {
        right[i]=arr[mp+(i+1)];
    }

    int i=0, j=0, k=lp, res=0;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=right[j];
            res=res+(n1-i);
            j++;
            k++;
        }
    }
    while(i<n1) 
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2) 
    {
        arr[k]=right[j];
        j++;
        k++;
    }

    return res;
}

int countInversions(int arr[], int lp, int rp)
{
    int invrs=0;

    if(lp<rp)
    {
        int mp = lp+(rp-lp)/2;

        invrs+=countInversions(arr, lp, mp);
        invrs+=countInversions(arr, mp+1, rp);
        invrs+=countAndMerge(arr, lp, mp, rp);
    }
    return invrs;
}

int main()
{
    int arr[] = {2,4,1,3,5};

    cout<<" NO of inversion: "<<countInversion(arr,5)<<endl;

    cout<<" NO of inversion: "<<countInversions(arr,0,4)<<endl;
}