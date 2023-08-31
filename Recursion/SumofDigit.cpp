#include<iostream>
#include<math.h>
using namespace std;

int SumOfDigits(int num)
{
    if(num<=9) return num;

    return num%10+SumOfDigits(num/10);
}

int main()
{
    int num = 121;
    int num1 = 253;
    int num2 = 9987;

    cout<<SumOfDigits(num)<<endl;

    cout<<SumOfDigits(num1)<<endl;

    cout<<SumOfDigits(num2)<<endl;
}