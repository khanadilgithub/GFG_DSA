#include<cstring>
#include<iostream>
#include<math.h>
using namespace std;
int table[20][20];

int longestCommonSubseq(string s1, string s2, int n1, int n2)
{
    for(int i=1; i<=n1; i++)
    {
        for(int j=1; j<=n2; j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                table[i][j]=table[i-1][j-1]+1;
            }
            else
            {
                table[i][j]=max(table[i][j-1],table[i-1][j]);
            }
        }
    }
    return table[n1][n2];
}

int main()
{
    string s1 ="AXYZ";
    string s2="BAZ";
    memset(table,0,sizeof(table));
    cout<<"Longest Common Subsequence is: ";
    cout<<longestCommonSubseq(s1,s2,s1.size(), s2.size());
}

