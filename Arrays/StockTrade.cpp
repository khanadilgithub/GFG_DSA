#include<iostream>
#include<math.h>
using namespace std;

//Method 1 using recursion
int maxProfit(int price[], int strt, int end)
{
    if(end<=strt) return 0;

    int profit=0;
    for(int i=strt;i<end; i++)
    {
        for(int j=i+1; j<=end; j++)
        {
            if(price[j]>price[i])
            {
                int cur_prof =price[j]-price[i]+maxProfit(price, strt, i-1)+ maxProfit(price, j+1, end);

                profit= max(profit, cur_prof);
            }
        }
    }
    return profit;
}

//Method 2
int stockTrade(int price[], int n)
{
    int profit=0;

    for(int i=1; i<n; i++)
    {
        if(price[i]>price[i-1])
        {
            profit+=(price[i]-price[i-1]);
        }
    }

    return profit;
}

int main()
{
    int price[] = {1,5,3,8,12};

    cout<<stockTrade(price,5)<<endl;

    cout<<maxProfit(price, 0, 4);
}