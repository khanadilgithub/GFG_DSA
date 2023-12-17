#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<math.h>
using namespace std;

//Naive solution
void morethanNbyKoccurence(int arr[], int n, int k)
{
    sort(arr, arr+n);
    int i=1, count=1;

    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            count++;
            i++;
        }
        if(count>n/k)
        {
            cout<<arr[i-1]<<" ";
        }
        count=1;
        i++;
    }
}

//Efficinet Solution
void morethanNbyKoccurences(int arr[], int n, int k)
{
    unordered_map<int,int> elmfmap;

    for(int i=0; i<n; i++)
    {
        elmfmap[arr[i]]++;
    }

    for(auto elm: elmfmap)
    {
        if(elm.second>n/k)
        {
            cout<<elm.first<<" ";
        }
    }
}

//O(nk) solution to be implimented later

void morethanNbyKoccurnc(int arr[], int n, int k)
{
    unordered_map<int, int> mp;

    for(int i=0; i<n; i++)
    {
        if(mp.find(arr[i])!=mp.end())
        {
            mp[arr[i]]++;
        }
        else if(mp.size()<k-1)
        {
            mp[arr[i]]=1;
        }
        else
        {
            for(auto elm:mp)
            {
                elm.second--;
                if(elm.second==0)
                {
                    mp.erase(elm.first);
                }
            }
        }
    }
    for(auto elm:mp)
    {
        int count=0;

        for(int i=0; i<n; i++)
        {
            if(elm.first==arr[i])
            {
                count++;
            }
        }
        if(count>n/k)
        {
            cout<<elm.first<<" ";
        }
    }
}

int main()
{
    int arr[] = {30,10,20,20,20,10,40,30,30};

    int n=9, k=4;

    morethanNbyKoccurence(arr, n,k);
    cout<<endl;
    morethanNbyKoccurences(arr, n,k);
    cout<<endl;
    morethanNbyKoccurnc(arr, n,k);
    cout<<endl;

}