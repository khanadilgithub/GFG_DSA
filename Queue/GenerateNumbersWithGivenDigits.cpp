#include<iostream>
#include<queue>
#include<math.h>
using namespace std;

void generateNumbers(int num)
{
    queue<string> q;

    q.push("5");
    q.push("6");

    for(int i=0; i<num; i++)
    {
        string cur = q.front();
        cout<<cur<<" ";
        q.pop();
        q.push(cur+"5");
        q.push(cur+"6");
    }
}

int main()
{
    int num =10;

    generateNumbers(10);
}