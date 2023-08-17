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

//method 3 using Euclidean algoritms by substraction

int gcdEucld(int a, int b)
{
    //everything devides zero
    if(a==0) return b;

    if(b==0) return a;

    //base case 
    if (a==b) return a;

    // a is greater

    if(a>b) return gcdEucld(a-b, b);

    return gcdEucld(a, b-a);

}

int main()
{
    int num1=56, num2=98;

    cout<<"GCD OR HCF is: "<<gcd(num1,num2)<<endl;
    cout<<"GCD OR HCF is: "<<gcdr(num1,num2)<<endl;
    cout<<"GCD OR HCF is: "<<gcdEucld(num1,num2)<<endl;
}