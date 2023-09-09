#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void permutation(string str, int i=0)
{
    if(i==(str.size()-1)) 
    {
        cout<<str<<endl;
        return;
    }

    for(int j=i; i<str.size(); j++)
    {
        swap(str[i],str[j]);

        permutation(str, i+1);

        swap(str[i],str[j]);
    }
}

int main()
{
    string str ="ABC";

    permutation(str);
}