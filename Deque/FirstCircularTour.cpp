#include<iostream>
#include<math.h>
using namespace std;
//Naive Solution
int firstCircularTours(int ppump[], int pdist[], int n)
{
    for(int start=0; start<n; start++)
    {
        int curpetrol=0;
        int end=start;
        while(true) //for( end=start; end<start+n; end++) this for loop can aslo be used here
        {
            curpetrol+=(ppump[end]-pdist[end]);
            if(curpetrol<0)
            {
                break;
            }
            end=(end+1)%n;
            if(start==end)
            {
                return start+1;
            }
        }
    }
    return -1;
}

//Efficient Solution
int firstCircularTour(int ppump[], int pdist[], int n)
{
    int curpetrol=0, prevpetrol=0;
    int start=0;
    for(int end=0; end<n; end++)
    {
        curpetrol+=(ppump[end]-pdist[end]);
        if(curpetrol<0)
        {
            prevpetrol+=curpetrol;
            curpetrol=0;
            start=end+1;
        }
    }
    if((curpetrol+prevpetrol)>=0)
    {
        return start+1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int ppump[] = {4,8,7,4};
    int pdist[] = {6,5,3,5};

    cout<<firstCircularTours(ppump, pdist, 4)<<endl;

    cout<<firstCircularTour(ppump, pdist, 4)<<endl;
}