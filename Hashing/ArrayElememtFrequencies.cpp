#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;

//Naive Solution

void elementFreq(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        bool found=false;
        for(int j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
            {
                found=true;
                break;
            }
        }
        if(found)
        {
            continue;
        }

        int freq=1;

        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;
            }
        }
        cout<<arr[i] <<" "<<freq<<endl;
    }
}

//Efficient Solution

void elementFrequencies(int arr[], int n)
{
    unordered_map<int, int> elmFreq;

    for(int i=0; i<n; i++)
    {
        elmFreq[arr[i]]++;
    }
    for(auto elm : elmFreq)
    {
        cout<<elm.first<<" "<<elm.second<<endl;
    }
}

int main()
{

    int arr[] = {10,20,20,10,30,50,50,50,50};
    int n = 9;

    elementFreq(arr,n);

    elementFrequencies(arr, n);
}