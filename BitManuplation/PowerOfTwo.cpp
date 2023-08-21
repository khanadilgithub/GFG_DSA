#include<iostream>
#include<math.h>
using namespace std;

//Method 1 using log

bool powerofTwo(unsigned int num)
{
    if (num==0) return false;
    return (ceil(log2(num))==floor(log2(num)));
}

//finding power of two using brian kernighan's algorithms
bool poweroftwo(unsigned int num)
{
    return (num!=0)&&((num&(num-1))==0);
}

int main()
{
    unsigned int num1 = 30, num2=128;
    cout<<poweroftwo(num1)<<endl;
    cout<<poweroftwo(num2)<<endl;

    cout<<powerofTwo(num1)<<endl;
    cout<<powerofTwo(num2)<<endl;
}