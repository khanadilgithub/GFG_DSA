#include<iostream>
#include<math.h>
using namespace std;

void printReveseOrder(int num)
{
    if(num==0) return;
    printReveseOrder(num-1);
    cout<<num<<endl;
}

int main()
{
    int num=5;
    printReveseOrder(num);
}