#include<iostream>
#include<math.h>
using namespace std;
//Method 1;
long long power(int num, int pwr)
{
    int ans = num;
    if(pwr==0) return 1;

    for(int i=2; i<=pwr; i*=2)
    {
        ans=ans*ans;
    }
    if(pwr%2==0) return ans;
    else return num*ans;
}

//Method 2 of power

long long powr(int num, int pwr)
{
    int res=1;///initialize results

    while(pwr>0)
    {
        //if pwr is odd, multiple num to make it even
        if(pwr&1) res*=num;

        //pwr must be even now 

        pwr=pwr>>1;//y=y/2
        num*=num;//change num to num^2
    }
    return res;
}

//Method 3 of power iterative 

long long Power(int num, int pwr)
{
    int temp=0;

    if(pwr==0) return 1;

    temp = Power(num, pwr/2);

    if(pwr%2==0) return temp*temp;
    else return num*temp*temp;
}

int main()
{
    int num=3, pwr=5;
    int num1=2, pwr1=4;

    cout<<power(num,pwr)<<endl;
    cout<<power(num1,pwr1)<<endl;

    cout<<powr(num,pwr)<<endl;
    cout<<powr(num1,pwr1)<<endl;

    cout<<Power(num,pwr)<<endl;
    cout<<Power(num1,pwr1)<<endl;
}