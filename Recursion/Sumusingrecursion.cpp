#include<iostream>
#include<math.h>
using namespace std;

int RecursiveSum(int num)
{
    if(num==0) return num;

    return num+RecursiveSum(num-1);
}

int main()
{
    int num = 10;
    cout<<RecursiveSum(num)<<endl;
}