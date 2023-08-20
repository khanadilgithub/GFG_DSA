#include<iostream>
#include<math.h>
using namespace std;

void sieveofEratosthenes(int num)
{
    int primes[num] = {0};
    int n = sqrt(num);
    for (int i=2;i<=n; i++)
    {
        if(primes[i]==0)
        {
            for(int j=i*i; j<=num; j=j+i)
            {
                primes[j]=1;
            }
        }
    }
    for (int i=2;i<=num; i++)
    {
        if(primes[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int num =30;
    sieveofEratosthenes(num);
}