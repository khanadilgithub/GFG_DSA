#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int maxGuest(int arv[], int dep[], int n)
{
    sort(arv, arv+n);
    sort(dep, dep+n);

    int i=1,j=0,res=1,curr=1;

    while(i<n && j<n)
    {
        if(arv[i]<dep[j])
        {
            curr++; i++;
        }
        else
        {
            curr--;j++;
        }
        res=max(curr,res);
    }
    return res;
}

int main()
{
    int arv[] = { 900, 600, 700 };
    int dep[] = { 1000, 800, 730 };

    int n = sizeof(arv)/sizeof(arv[0]);

    cout<<maxGuest(arv, dep, n);

    return 0;
}