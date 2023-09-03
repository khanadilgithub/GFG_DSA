#include<iostream>
#include<math.h>
using namespace std;

int josphus(int num, int k)
{
    if(num==1) return 0;

    return (josphus(num-1,k)+k)%num;
}

int main()
{
    int num=5;
    int k=3;

    cout<<josphus(num,k)<<endl;
}