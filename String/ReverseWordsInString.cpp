#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

void reversestr(string &str, int strt, int end)
{
    while(strt<=end)
    {
        swap(str[strt++], str[end--]);
    }
}

void reverseWordsInString(string &str)
{
    int n = str.size();
    reversestr(str, 0, n-1);

    int i=0;
    for(int j=0; j<n; j++)
    {
        if(str[j]==' ')
        {
            reversestr(str, i, j-1);
            i=j+1;
        }
    }
    reversestr(str, i, n-1);
    cout<<str<<endl;
}

int main()
{

    string str = "welcome to home";

    reverseWordsInString(str);

}