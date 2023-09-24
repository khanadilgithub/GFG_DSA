#include<iostream>
#include<math.h>
using namespace std;

//Naive Solution 

int appearngMaxElm(int left[], int right[], int n)
{
    int freq[100] = {0};


    for(int i=0; i<n; i++)
    {
        for(int j=left[i]; j<=right[i]; j++)
        {
            freq[j]+=1; //preprocessing of elm appearence
        }
    }

    int res=0;

    for(int i=1; i<100; i++)
    {
        if(freq[i]>freq[res])
        {
            res=i;
        }
    }

    return res;
}

//Efficient Solution

int appearingMaxElm(int left[], int right[], int n)
{
    int freq[101] = {0};

    for(int i=0; i<n; i++)
    {
        freq[left[i]]++;
        freq[right[i]+1]--;
    }

    int res=0;

    for(int j=1; j<100; j++)
    {
        freq[j] = freq[j-1]+freq[j];

        if(freq[j]>freq[res])
        {
            res=j;
        }
    }
    return res;
}

int main()
{
    int left[] ={1,2,4};
    int right[] = {4,5,7};

    cout<<appearngMaxElm(left,right,3)<<endl;

    cout<<appearingMaxElm(left,right,3)<<endl;
}