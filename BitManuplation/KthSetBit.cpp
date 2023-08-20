#include<iostream>
#include<math.h>
using namespace std;
//Method 1 power method or division method
bool kthsetbit(int num, int k)
{
    int setbit= pow(2,k-1);
    return num&setbit;
}

//Method 2 using shift oerator (right or left)
bool kthSetbit(int num, int k)
{
    int Setbit=(1<<(k-1));

    return num&Setbit;
}

int main()
{
    int num =7; 
    int k2=2, k5=5;

    cout<<kthsetbit(num, k2)<<endl;

    cout<<kthSetbit(num, k2)<<endl;

    cout<<kthsetbit(num, k5)<<endl;

    cout<<kthSetbit(num, k5)<<endl;
    
}