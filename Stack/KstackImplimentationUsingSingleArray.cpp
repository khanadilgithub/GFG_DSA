#include<iostream>
#include<math.h>
using namespace std;
struct kstack
{
    int *arr, *top, *next;
    int k, cap, free_top;

    kstack(int k1, int n)
    {
        k=k1;
        cap=n;
        arr = new int[cap];
        top = new int [k];
        next = new int[cap];

        free_top=0;
        fill(top, top+k,-1);

        for(int i=0; i<cap-1; i++)
        {
            next[i]=i+1;
        }
        next[cap-1]=-1;
    }

    bool isFull()
    {
        return (free_top==-1);
    }

    bool isEmpty(int sn)
    {
        return (top[sn]==-1);
    }

    void Push(int val, int sn)
    {
        if(isFull())
        {
            cout<<"Stack is Full"<<endl;
        }

        int i = free_top;
        free_top=next[i];
        next[i]=top[sn];
        top[sn]=i;
        arr[i]=val;
    }

    int Pop(int sn)
    {
        int i=top[sn];
        top[sn]=next[i];
        next[i]=free_top;
        free_top=i;
        return arr[i];
    }

};

int main()
{
    int k=3, n=10;

    kstack kst(k,n);

    kst.Push(15,2);
    kst.Push(45,2);

    kst.Push(17,1);
    kst.Push(49,1);
    kst.Push(39,1);

    kst.Push(11,0);
    kst.Push(9,0);
    kst.Push(7,0);

    cout<<"Popped element from stack 2 is: "<<kst.Pop(2)<<endl;
    cout<<"Popped element from stack 1 is: "<<kst.Pop(1)<<endl;
    cout<<"Popped element from stack 0 is: "<<kst.Pop(0)<<endl;

}