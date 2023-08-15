#include<iostream>
#include<string>
using namespace std;

//Iterative method to find factorial

int factorial(int num)
{
    int res=1;

    for (int i=2; i<=num; i++)
    {
        res*=i;
    }
    return res;
}

//Recursive Soution to find factorial

int factorials(int num)
{
    if(num==0) return 1;

    return num*factorials(num-1);
}

int main()
{
    cout<<factorial(0)<<endl;
    cout<<factorial(1)<<endl;
    cout<<factorial(2)<<endl;
    cout<<factorial(6)<<endl;
    
    cout<<factorials(0)<<endl;
    cout<<factorials(1)<<endl;
    cout<<factorials(2)<<endl;
    cout<<factorials(6)<<endl;
}