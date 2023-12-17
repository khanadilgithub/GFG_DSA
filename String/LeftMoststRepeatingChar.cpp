#include<iostream>
#include<math.h>
using namespace std;

//Naive solution

int leftmostRepeatingChar(string& str)
{
    int n= str.length();
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(str[i]==str[j])
            {
                return i;
            }
        }
    }
    return -1;
}

//Better Approach

int leftmstRepeatingChar(string &str)
{
    const int charlen=256;
    int n = str.size();

    int freq[charlen] = {0};

    //storing the frequencies of individual charector
    for(int i=0; i<n; i++)
    {
        freq[str[i]]++;
    }

    //checking if chrector is repeating
    for(int i=0; i<n; i++)
    {
        if(freq[str[i]]>1)
        {
            return i;
        }
    }

    return -1;
}

//Efficient approach

int leftmostRepeatingChars(string &str)
{
    const int charlen =256;

    int n = str.size();

    bool visited[256] = {false};

    int res=-1;

    //fill(visited, visited+256, false);
    // fill is C++ STL method to initialize an array with certain value

    for(int i=n-1; i>=0; i--)
    {
        if(visited[str[i]])
        {
            res= i;
        }
        else
        {
            visited[str[i]] = true;
        }
    }
    return res;
}

int main()
{
    string str = "codesforcoders";

    cout<<"Repeating char index is: "<<leftmostRepeatingChar(str)<<endl;

    cout<<"Repeating char index is: "<<leftmstRepeatingChar(str)<<endl;

    cout<<"Repeating char index is: "<<leftmostRepeatingChars(str)<<endl;
}