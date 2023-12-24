#include<iostream>
#include<math.h>
using namespace std;

const int charsize=256;

int factorial(int n)
{
    int res=1;
    for(int i=1; i<=n; i++)
    {
        res= res*i;
    }
    return  res;
}

int lexicographicalRank(string &str)
{
    int res=1;
    int count[256] = {0};
    int n = str.length();

    int fact=factorial(n);

    for(int i=0; i<n; i++)
    {
        count[str[i]]++;
    }

    for(int i=1; i<charsize; i++)
    {
        count[i]+=count[i-1];
    }

    for(int i=0; i<n-1; i++)
    {
        fact=fact/(n-i);
        res=res+count[str[i]-1]*fact;

        for(int j=str[i]; j<charsize; j++)
        {
            count[j]--;
        }
    }
    return res;
}

int main()
{
    string str ="STRING";

    cout<<lexicographicalRank(str)<<endl;
}