#include<iostream>
#include<math.h>
using namespace std;

//Method 1 of finding no of set bit
unsigned int countSetbits(unsigned int num)
{
    unsigned int ans=0;
    while(num)
    {
        ans+=num&1;
        num>>=1;
    }
    return ans;
}

unsigned int countSetBits(unsigned int num)
{
    unsigned int ans=0;

    while(num)
    {
        num&=(num-1);

        ans++;
    }

    return ans;
}

int main()
{
    unsigned int num=9;
    cout<<countSetbits(num)<<endl;

    cout<<countSetBits(num)<<endl;

}