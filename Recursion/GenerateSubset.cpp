#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void Subset(string& str, string substr ="", int indx =0)
{
    if(indx==str.length())
    {
        cout<<substr <<" ";
        return;
    }

    Subset(str, substr, indx+1);
    Subset(str, substr+str[indx], indx+1);
}

int main()
{
    string str = "ABC";

    Subset(str);
}