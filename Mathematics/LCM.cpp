#include<iostream>
using namespace std;

//Method 1 of GCD 
int temp=0;
int gcd(int a, int b)
{
    while(true)
    {
        if(b==0) return a;

        temp=b;
        b=a%b;
        a=temp;
    }
}

//Method 2 of GCD using recusion

int gcdr(int a, int b)
{
    if (b==0) return a;
    return gcdr(b, a%b);
}

int main()
{
    int num1=15, num2=20;

    cout<<"LCM is: "<<(num1*num2)/gcd(num1,num2)<<endl;
    cout<<"LCM is: "<<(num1*num2)/gcdr(num1,num2)<<endl;
}