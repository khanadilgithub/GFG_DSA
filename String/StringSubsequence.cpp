#include<iostream>
#include<math.h>
using namespace std;

bool subSequenceSearch(const string str1, const string str2)
{
    int n =str1.size();
    int m = str2.size();
    int j=0;
    for(int i=0; i<n && j<m; i++)
    {
        if(str1[i]==str2[j])
        {
            j++;
        }
    }
    return (j==m);
}

//recursion based approach

bool subSequenceSearchRec(const string str1, const string str2, int n, int m)
{

    if(m==0)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }

    if(str1[n-1]==str2[m-1])
    {
        return subSequenceSearchRec(str1, str2, n-1, m-1);
    }
    else
    {
        return subSequenceSearchRec(str1, str2, n-1, m);
    }
}

int main()
{
    string str1= "ABCDEF";

    string str2= "ADE";

    cout<<subSequenceSearch(str1, str2)<<endl;

    cout<<subSequenceSearchRec(str1, str2, str1.size(), str2.size())<<endl;
}