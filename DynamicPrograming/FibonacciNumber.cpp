#include<iostream>
#include<math.h>
using namespace std;

int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int num=10;
    cout<<"Fibonacci of "<<num<<" is: "<<fibonacci(num)<<endl;
}