#include<iostream>
#include<math.h>
using namespace std;

bool checkStringRotation(string &str1, string &str2)
{
    if(str1.length()!=str2.length())
    {
        return false;
    }
    return (str1+str1).find(str2)!=string::npos;
}

int main()
{
    string str1 = "adilkhan";

    string str2 = "khanadil";

    cout<<checkStringRotation(str1, str2)<<endl;

}