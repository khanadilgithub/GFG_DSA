#include<iostream>
#include<math.h>
using namespace std;

class Queue
{
    private:
    size_t m_size=0, m_cap=5;
    int *m_arr;
    int m_front=0, m_rear=-1;
    public:
    Queue()
    {
        m_arr= new int [m_cap];
    }
    size_t Size()
    {
        return m_size;
    }
    bool Empty()
    {
        return m_size==0;
    }
    bool Full()
    {
        return m_size==m_cap;
    }
    void Enque(int val)
    {
        if(m_size==m_cap)
        {
            int *temp = new int [m_cap*2];

            for(int i=0; i<m_cap; i++)
            {
                temp[i]=m_arr[i];
            }
            delete[] m_arr;
            m_arr=temp;
            m_cap=m_cap*2;
        }
        m_rear=(m_rear+1)%m_cap;
        m_arr[m_rear]=val;
        m_size++;
    }
    void Deque()
    {
        if(m_size==0) return;

        m_front=(m_front+1)%m_cap;
        m_size--;
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
    q.Enque(60);
    q.Enque(70);
    q.Deque();
    q.Deque();
    q.Enque(80);
    q.Deque();
    q.Deque();
    q.Enque(90);
    q.Deque();
    q.Deque();
    q.Enque(100);

    cout<<q.Size()<<endl;


}