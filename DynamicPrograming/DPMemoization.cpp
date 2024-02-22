#include<iostream>
#include<math.h>
using namespace std;

int memo[20];

int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }

    if(memo[n]!=-1)
    {
        return memo[n];
    }
    else 
    {
        memo[n]= fibonacci(n-1)+fibonacci(n-2);
    }
    return memo[n];
}

int main()
{
    int num=12;

    fill(memo, memo+20, -1);

    cout<<"Fibonacci of "<<num<<" is: "<<fibonacci(num)<<endl;
}