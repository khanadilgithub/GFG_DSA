#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;

//Naive Solution

void countDistinctElement(int arr[], int n, int k)
{
    for(int i=0; i<=n-k; i++)
    {
        int res=0;
        for(int j=0; j<k; j++)
        {
            bool found = false;
            for(int p=0; p<j; p++)
            {
                if(arr[i+j]==arr[i+p])
                {
                    found=true;
                    break;
                }
            }
            if(found==false)
            {
                res++;
            }
        }
        cout<<res<<" ";
    }
}

//Efficinet Solution

void countDistinctElements(int arr[], int n, int k)
{
    unordered_map<int, int> elmmap;

    for(int i=0; i<k; i++)
    {
        elmmap[arr[i]]++;
    }
    cout<<elmmap.size()<<" ";

    for(int i=k; i<n; i++)
    {
        elmmap[arr[i-k]]--;

        if(elmmap[arr[i-k]]==0)
        {
            elmmap.erase(arr[i-k]);
        }

        elmmap[arr[i]]++;

        cout<<elmmap.size()<<" ";
    }
}

int main()
{
    int arr1[] = {10,20,20,10,30,40,10};
    int k1=4;
    int arr2[] = {10,10,10,10};
    int k2=2;
    int arr3[] = {10,20,30,40};
    int k3=3;

    countDistinctElement(arr1, 7, k1);
    cout<<endl;
    countDistinctElement(arr2, 4, k2);
    cout<<endl;
    countDistinctElement(arr3, 4, k3);
    cout<<endl;

    
    countDistinctElements(arr1, 7, k1);
    cout<<endl;
    countDistinctElements(arr2, 4, k2);
    cout<<endl;
    countDistinctElements(arr3, 4, k3);
    cout<<endl;

}