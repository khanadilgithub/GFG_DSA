#include<iostream>
#include<math.h>
using namespace std;

class Queue
{
    private:
    size_t size=0, cap=5;
    int *arr;
    int front=0, rear=-1;
    public:
    Queue()
    {
        arr= new int [cap];
    }
    size_t Size()
    {
        return size;
    }
    bool Empty()
    {
        return size==0;
    }
    bool Full()
    {
        return size==cap;
    }
    void Enque(int val)
    {
        if(size==cap) return;
        rear=(rear+1)%cap;
        arr[rear]=val;
        size++;
    }
    void Deque()
    {
        if(size==0) return;
        front=(front+1)%cap;
        size--;
    }

};

int main()
{
    Queue q;

    q.Enque(10);
    q.Enque(20);
    q.Enque(30);
    q.Enque(40);
    q.Enque(50);
    q.Deque();
    q.Deque();
    q.Deque();
    q.Enque(60);
    q.Enque(70);
    q.Deque();
    q.Deque();
    q.Deque();
    q.Enque(80);

    cout<<q.Size()<<endl;


}