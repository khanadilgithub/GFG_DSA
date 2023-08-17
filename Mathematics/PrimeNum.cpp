#include<iostream>
#include<math.h>
using namespace std;

//Method 1
bool isPrime(int num)
{
    int n = sqrt(num);

    for (int i=2; i<n; i++)
    {
        if(num%i==0) return false;
    }

    return true;
}

//Method 2

bool isprime(int num)
{
    int n =sqrt(num);
    //check if num==1 or num==0

    if(num<=1) return false;

    //check if num==2 or num==3

    if (num==2 || num==3) return true;

    //check if num is divisible by 2 or 3

    if(num%2==0 || num%3==0) return false;

    //check from 5 to sqrt(num) 
    //itearte i by (i+6)

    for (int i=5; i<n; i+=6)
    {
        if(num%i==0 || num%(i+2)==0) return false;
    }

    return true;
}

int main()
{
    int num =11;

    cout<<" Is Prime : "<<isPrime(num)<<endl;

    cout<<" Is Prime : "<<isprime(num);

}