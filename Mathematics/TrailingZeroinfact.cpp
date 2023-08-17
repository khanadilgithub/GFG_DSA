#include<iostream>
using namespace std;

int trailngZero(int num)
{
    int ans=0, div=5;

    if(num<0) return -1;

    while(div<=num)
    {
        ans+=num/div;
        div*=5;
    }
    return ans;
}

int main()
{
    int num=100;

    cout<<"No of trailing zeros are: "<<trailngZero(num);
}