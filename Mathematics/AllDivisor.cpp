#include<iostream>
#include<math.h>
using namespace std;

//Method 1 in unsorted order
void allDivisor(int num)
{
    int n =sqrt(num);
    for (int i=1; i<=n; i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
        }

        if(num%i==0 && num/i!=i)
        {
            cout<<num/i<<" ";
        }
    }
}

//Method 2 sorted order
void allDivisors(int num)
{
    int n =sqrt(num);
    for (int i=1; i<=n; i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
        }
    }

    for (int i=n-1; i>=1; i--)
    {
        if(num%i==0)
        {
            cout<<num/i<<" ";
        }
    }
}

int main()
{
    int num=100;
    allDivisor(100);
    cout<<endl;
    allDivisors(100);
}