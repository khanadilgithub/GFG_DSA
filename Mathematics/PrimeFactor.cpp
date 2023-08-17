#include<iostream>
#include<math.h>
using namespace std;

//function to print all prime factor of a given number
void primefactor(int num)
{
    //print numbe rof twos
    if (num<=1) return;

    while(num%2==0)
    {
        cout<<2<<" ";
        num/=2;
    }

    //n must be odd at this point so we can skip even numbers

    for (int i=3; i<sqrt(num); i+=2)
    {
        while(num%i==0)
        {
            cout<<i<<" ";
            num/=i;
        }
    }

    //if number price so it will have only one prime factor
    //that is the number itself 
    //all prime no are greater than 1 and we cover the two already
    if(num>2) cout<<num;


}

int main()
{
    int num =315;

    cout<<"Prime factors are: ";
    primefactor(num);
}