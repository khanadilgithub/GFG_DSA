#include<iostream>
#include<math.h>
using namespace std;

void printReveseOrder(int num)
{
    if(num==0) return;
    cout<<num<<endl;
    printReveseOrder(num-1);
}

int main()
{
    int num=5;
    printReveseOrder(num);
}