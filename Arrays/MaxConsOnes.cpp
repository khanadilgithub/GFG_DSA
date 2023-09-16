#include<iostream>
#include<math.h>
using namespace std;


int maxConsucOnes(int arr[], int n)
{
    int consones=0;
    int ans =0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            consones=0;
        }
        else
        {
            consones++;
            ans=max(consones,ans);
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1,0,1,1,1,1,0,1,1};
    cout<<maxConsucOnes(arr,9)<<endl;
}
