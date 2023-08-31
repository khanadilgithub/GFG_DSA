#include<iostream>
#include<math.h>
#include<string>

using namespace std;

//Method1 
bool palindrome(string str, int fstindx, int lstindx)
{
    if(str[fstindx]!=str[lstindx]) return false;
    palindrome(str, ++fstindx, --lstindx);

    if(fstindx>=lstindx) return true;
}

//Method2
bool Palindrome(string str, int fstindx, int lstindx)
{
    if(fstindx>=lstindx) return true;

    return (str[fstindx]==str[lstindx])&&Palindrome(str, ++fstindx, --lstindx);
}


int main()
{
    string str = "acbbca";
    string str1 = "geekforgeeks";

    cout<<palindrome(str,0, str.size()-1 )<<endl;

    cout<<palindrome(str1,0, str1.size()-1 )<<endl;

    cout<<Palindrome(str,0, str.size()-1 )<<endl;

    cout<<Palindrome(str1,0, str1.size()-1 )<<endl;
}