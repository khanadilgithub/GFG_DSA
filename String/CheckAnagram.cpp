#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

//Naive solution

bool anagram(string str1, string str2)
{
    if(str1.size()!=str2.size())
    {
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1==str2;
}

//Efficinet solution

bool checkAnagram(string str1, string str2)
{
    const int charsize = 256;

    int n = str1.size();
    int m = str2.size();

    if(n!=m)
    {
        return false;
    }

    int countChar[256] = {0};

    for(int i=0; i<n; i++)
    {
        countChar[str1[i]]++;
        countChar[str2[i]]--;
    }

    for(int i=0; i<charsize ; i++)
    {
        if(countChar[i]!=0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str1 = "aabca";
    string str2 = "acaba";

    cout<<anagram(str1, str2)<<endl;

    cout<<checkAnagram(str1, str2)<<endl;

}