#include<iostream>
#include<list>
#include<math.h>
using namespace std;

int searchval(list<int> &ls, int val)
{
    int pos=1;
    for(auto elm:ls)
    {
        if(elm==val)
        {
            return pos;
        }
        pos++;
    }

}

int main()
{
    list<int> numlist;

    for(int i=1; i<=10; i++)
    {
        numlist.push_back(i*2);
    }

    cout<<searchval(numlist, 6)<<endl;
}