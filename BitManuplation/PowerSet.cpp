#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void powerset(string str)
{
    int n = str.size();
    int p = (1<<n);
    cout<<p<<endl;

    for(int i=0; i<p; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i&(1<<j))
            {
                cout<<str[j];
            }
        }
        cout<<endl;
    }
}

int main()
{
    string str = "abc";

    powerset(str);
    
}