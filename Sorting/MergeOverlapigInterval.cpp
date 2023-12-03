#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

struct interval
{
    int st=0, end=0;
};

bool cmprsn(interval a, interval b)
{
    return a.st<b.st;
}

void mergeInterval(interval arr[], int n)
{

    sort(arr, arr+n, cmprsn);
    int indx=0;
    for(int i=1; i<n; i++)
    {
        if(arr[indx].end>=arr[i].st)
        {
            arr[indx].st =min(arr[indx].st, arr[i].st);
            arr[indx].end =max(arr[indx].end, arr[i].end);
        }
        else 
        {

            arr[++indx] = arr[i];
        }
    }

    for(int i=0; i<=indx; i++)
    {
        cout<<"["<<arr[i].st<<", "<<arr[i].end<<"] ";
    }
}

int main()
{
    interval arr[] = { {5,10}, {3,15}, {18,30}, {2,7} };

    int n = sizeof(arr)/sizeof(arr[0]);

    mergeInterval(arr, n);

}