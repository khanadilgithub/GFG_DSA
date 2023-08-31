#include<iostream>
#include<math.h>
using namespace std;

void tailrecursion(int num)
{
    if(num==0) return;

    cout<<num << " ";
    tailrecursion(num-1);
}

int main()
{
    int num = 10;
    tailrecursion(num);
}