#include<iostream>
#include<math.h>
using namespace std;

class Deque
{
    private:
    int *m_arr;
    int m_cap=10;
    size_t m_size=0;
    int m_front=0;
    public:
    Deque()
    {
        m_arr = new int [m_cap];//constructor
    }
    void pushFront(int val)
    {
        m_front=(m_front-1+m_cap)%m_cap;
        m_arr[m_front]=val;
        m_size++;
    }
    void pushRear(int val)
    {
        int m_rear=(Rear()+1)%m_cap;
        m_arr[m_rear]=val;
        m_size++;
    }
    int popFront()
    {
        int value=m_arr[m_front];
        m_front=(m_front+1)%m_cap;
        m_size--;
        return value;
    }
    int popRear()
    {
        int value=m_arr[Rear()];
        m_size--;
        return value;
    }
    bool Full()
    {
        return m_size==m_cap;
    }
    bool Empty()
    {
        return m_size==0;
    }
    size_t Size()
    {
        return m_size;
    }
    int Front()
    {
        return m_front;
    }
    int Rear()
    {
        return (m_front+m_size-1)%m_cap;
    }
};

int main()
{
    Deque Dq;
    Dq.pushFront(10);
    cout<<Dq.popFront()<<endl;
    cout<<Dq.Empty()<<endl;
    Dq.pushRear(100);
    Dq.pushFront(200);
    Dq.pushRear(300);
    cout<<Dq.Front()<<endl;
    cout<<Dq.Rear()<<endl;
    cout<<Dq.Empty()<<endl;
    cout<<Dq.Size()<<endl;
    cout<<Dq.popRear()<<endl;
}