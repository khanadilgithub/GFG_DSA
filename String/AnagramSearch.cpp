#include<iostream>
#include<math.h>
using namespace std;


//Naive Solution
bool areAnagram(string &pat, string &txt, int indx)
{
    int count[256]={0};

    for(int j=0; j<pat.length(); j++)
    {
        count[pat[j]]++;
        count[txt[indx+j]]--;
    }

    for(int j=0; j<256; j++)
    {
        if(count[j]!=0)
        {
            return false;
        }
    }

    return true;
}
bool anagramSearch(string &str, string &patrn)
{
    int n = str.length();
    int m = patrn.length();

    for(int i=0; i<n-m; i++)
    {
        if(areAnagram(patrn, str, i))
        {
            return true;
        }
    }
    return false;
}


//Efficient Solution 

bool areSame(int CT[], int CP[])
{
    for(int i=0; i<256; i++)
    {
        if(CT[i]!=CP[i])
        {
            return false;
        }
    }
    return true;
}

bool anagramSearchs(string &str, string &patrn)
{
    int CT[256]={0}, CP[256]= {0};

    for(int i=0; i<patrn.length(); i++)
    {
        CT[str[i]]++;
        CP[patrn[i]]++;
    }

    for(int i=patrn.length(); i<str.length(); i++)
    {
        if(areSame(CT,CP))
        {
            return true;
        }
        CT[str[i]]++;
        CT[str[i-patrn.length()]]--;
    }
    return false;
}

int main()
{
    string str = "codesforcoders";

    string pattrn = "froc";

    cout<<anagramSearch(str, pattrn)<<endl;
    cout<<anagramSearchs(str, pattrn)<<endl;
}