#include<iostream>
#include<math.h>
using namespace std;

int maxropeCut(int rplen, int c1, int c2, int c3)
{
    if(rplen==0) return 0;
    if(rplen<0) return -1;

    int res = max(maxropeCut(rplen-c1, c1,c2,c3), max(maxropeCut(rplen-c2, c1,c2,c3), maxropeCut(rplen-c3,c1,c2,c3)));

    if(res==-1) return -1;

    return 1+res;  
}

int main()
{
    int rplen=5;
    int c1=1, c2=2,c3=5;
    cout<<maxropeCut(rplen, c1,c2,c3);
}