#include<iostream>
#include<math.h>
using namespace std;

int hoarePartition(int arr[], int n, int p)
{
    int pvt=arr[p];
    swap(arr[0], arr[p]);

    int lp=-1, rp=n;
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
    int arr[] = {5,3,8,4,2,7,1,10};

    int p=0;

    cout<<"Partion index is: "<<hoarePartition(arr, 8, p)<<endl;

}