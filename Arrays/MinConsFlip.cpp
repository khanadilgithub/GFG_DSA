#include<iostream>
#include<math.h>
using namespace std;

//method1
void minConsFlip(int arr[], int n)
{
    int elm=arr[0];

    bool fliped=false;

    if(n==2 && (arr[0]!=arr[1]))
    {
        cout<<" Flip from "<<0<<" to "<<0<<endl; 
        return;
    }

    for(int i=1; i<n; i++)
    {
        if((arr[i]!=elm) && (arr[i-1]==elm))
        {
            cout<<" Flip from "<<i;
            fliped=true;
        }
        else if((arr[i]==elm) && (arr[i-1]!=elm))
        {
            cout<<" to "<<i-1<<endl;
        }
        else if((arr[n-1]!=elm))
        {
            cout<<" to "<<i<<endl;
        }
    }

    if(!fliped) cout<<" No flip required "<<endl;
}

//Method2 better approach

void minConsFlips(int arr[], int n)
{
    bool fflp=false;
    for (int i=1; i<n; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            {
                cout<<" Flip from "<<i<<" to ";
                fflp=true;
            }
            else 
            {
                cout<<i-1<<endl;
            }
        }
    }
        if(arr[n-1]!=arr[0])
        {
            cout<<n-1<<endl;
        } 
    if(!fflp) cout<<" No flip rquired"<<endl;
}

int main()
{
    int arr[] = {1,1,0,0,0,1};

    int arr1[] = {1,0,0,0,1,0,0,1,1,1,1};

    int arr2[] = {1,1,1};

    int arr3[] = {0,1};

    int arr4[] = {0,1,1};

    int arr5[] = {0,1,0};


    minConsFlip(arr,6);

    minConsFlip(arr1,11);

    minConsFlip(arr2,3);

    minConsFlip(arr3,2);

    minConsFlip(arr4,3);

    minConsFlip(arr5,3);

     //Method2 better approach

    minConsFlips(arr,6);

    minConsFlips(arr1,11);

    minConsFlips(arr2,3);

    minConsFlips(arr3,2);

    minConsFlips(arr4,3);

    minConsFlips(arr5,3);
}