#include<iostream>
#include<math.h>
using namespace std;
const int charsize=256;
//Naive Solution

int longestSubString(string &str)
{
    int n =str.length();
    int res=0;

    for(int i=0; i<n; i++)
    {
        bool visited[256] ={0};
        for(int j=i; j<n; j++)
        {
            if(visited[str[j]]==true)
            {
                break;
            }
            else
            {
                res=max(res, (j-i)+1);
                visited[str[j]]=true;
            }
        }
    }
    return res;
}

//Efficinet Solution
int longestSubstring(string &str)
{
    int previndx[256]= {0};
    int n = str.length();
    fill(previndx, previndx+charsize-1, -1);
    int res=1;
    int strt=0;
    int curlen=1;
    for(int end=0; end<n; end++)
    {

        strt=max(strt,previndx[str[end]]+1);
        curlen=end-strt+1;
        res =max(res,curlen);
        previndx[str[end]]=end;
    }
    return res;
}

int main()
{
    string str = "abcdabc";

    string strtest="abaacdbab";

    cout<<longestSubString(str)<<endl;

    cout<<longestSubstring(str)<<endl;
}