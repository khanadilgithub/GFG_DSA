#include<iostream>
#include<math.h>
using namespace std;

//Naive Solution
int firstNonRepeatingChar(string &str)
{
    int n = str.size();

    for(int i=0; i<n; i++)
    {
        bool repating =false;
        for(int j=i+1; j<n; j++)
        {
            if(str[i]==str[j])
            {
                repating=true;
            }
        }
        if(!repating)
        {
            return i;
        }
    }
    return -1;
}

//Efficient Solution

int firstNonRepeatingChars(string &str)
{
    int res = INT16_MAX;
    const int charsize =256;

    int arr[charsize];

    fill(arr, arr+charsize-1, -1);

    int n = str.size();

    for(int i=0; i<n; i++)
    {
        if(arr[str[i]]==-1)
        {
            arr[str[i]]=i;
        }
        else
        {
            arr[str[i]]=-2;
        }
    }

    for(int i=0; i<charsize; i++)
    {
        if(arr[i] >= 0)
        {
            res=min(res,arr[i]);
        }
    }
    return (res==INT16_MAX)? -1: res;
}

int main()
{
    string str = "codesforcoders";
    cout<<firstNonRepeatingChar(str)<<endl;

    cout<<firstNonRepeatingChars(str)<<endl;
}