#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

//Naive Method
bool palindrom(const string &str)
{
    string revstr=str;
    reverse(revstr.begin(), revstr.end());

    return (str==revstr);
}

//Efficient solution

bool palindromCheck(const string &str)
{
    int i=0, j=str.size()-1;

    while(i<=j)
    {
        if(str[i++]!=str[j--])
        {
            return false;
        }

    }
    return true;
}

int main()
{
    string str = "ABCBA";

    cout<<palindrom(str)<<endl;

    cout<<palindromCheck(str)<<endl;
}