#include<iostream>
#include<math.h>
using namespace std;

//Naive Method
int majorityElem(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        int cnt=1;

        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        if(cnt>n/2) return i;
    }

    return -1;
}

//Moores Voting Alogorithm method

int majorityElm(int arr[], int n)
{
    int ans=0;

    int cnt=1;
    
    //Find a probable majority candidate 
    for(int i=1; i<n; i++)
    {
        if(arr[ans]==arr[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
            if(cnt==0)
            {
                ans=i;
                cnt=1;
            }
        }
    }

    //check if it stisfies the majorty condition  
    int mjrty=0;
    for (int j=0; j<n; j++)
    {
        if(arr[ans]==arr[j])
        {
            mjrty++;
        }
    }
    if(mjrty<=n/2) return -1;

    return ans;

} 

int main()
{
    int arr[] = {6,8,4,8,8};

    int mjrtyindx=majorityElm(arr,5);
    cout<<arr[mjrtyindx]<<endl;

    mjrtyindx=majorityElem(arr,5);
    cout<<arr[mjrtyindx]<<endl;
}