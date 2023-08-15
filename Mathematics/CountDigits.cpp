#include<iostream>
#include<string>
using namespace std;

//Method1 to count digits

int countDigits(int num)
{
    string str = to_string(num);
    int digits= str.size();
    return digits;
}

//Method2 to count digits
int coutntsDigit(int num)
{
    int count=0;

    while(num)
    {
        num/=10;
        count++;
    }
    return count;
}


int main()
{
    int Num = 9235;
    cout<<countDigits(Num);
    cout<<endl;
    cout<<coutntsDigit(Num);
}