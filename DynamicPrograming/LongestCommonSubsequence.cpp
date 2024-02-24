#include<iostream>
#include<math.h>
using namespace std;
int longestCommonSubseq(string s1, string s2, int n1, int n2)
{

    if(n1==0 || n2==0)
    {
        return 0;
    }
    if(s1[n1-1]==s2[n2-1])
    {
        return 1+longestCommonSubseq(s1,s2, n1-1, n2-1);
    }
    else
    {
        return max(longestCommonSubseq(s1,s2, n1-1, n2),longestCommonSubseq(s1,s2, n1, n2-1));
    }
}

int main()
{
    string s1 ="AXYZ";
    string s2="BAZ";
    cout<<"Longest Common Subsequence is: ";
    cout<<longestCommonSubseq(s1,s2,s1.size(), s2.size());
}

