#include<cstring>
#include<iostream>
#include<math.h>
using namespace std;
int memo[20][20];

int longestCommonSubseq(string s1, string s2, int n1, int n2)
{
    if(memo[n1][n2]!=-1)
    {
        return memo[n1][n2];
    }

    if(n1==0 || n2==0)
    {
        return 0;
    }

    if(s1[n1-1]==s2[n2-1])
    {
        memo[n1][n2] = 1+longestCommonSubseq(s1,s2, n1-1, n2-1);
    }
    else
    {
        memo[n1][n2] = max(longestCommonSubseq(s1,s2, n1-1, n2),longestCommonSubseq(s1,s2, n1, n2-1));
    }
    return memo[n1][n2];
}

int main()
{
    string s1 ="AXYZ";
    string s2="BAZ";
    memset(memo,-1,sizeof(memo));
    cout<<"Longest Common Subsequence is: ";
    cout<<longestCommonSubseq(s1,s2,s1.size(), s2.size());
}

