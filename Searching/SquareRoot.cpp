#include<iostream>
#include<math.h>
using namespace std;

//Naive Solution

int sqrroot(int num)
{
    int i=1;

    while(i*i<=num)
    {
        i++;
    }
    return i-1;
}

//Efficient Solution

int sqrRoot(int num)
{
    int lp=0, rp=num;

    int ans=0;

    while(lp<=rp)
    {
        int mid=(lp+rp)/2;

        int sqr= mid*mid;
        if(sqr==num)
        {
            return mid;
        }
        else if(sqr>num)
        {
            rp=mid-1;
        }
        else
        {
            ans=mid;
            lp=mid+1;
        }
    }

    return ans;
}

int main()
{
    cout<<sqrroot(16)<<endl;
    cout<<sqrRoot(26)<<endl;
}