#include<iostream>
#include<math.h>
using namespace std;

struct Node
{
    int m_val;
    Node* m_next;
    Node(int val):m_next(NULL),m_val(val)
    {
        //constructor
    }
};

class Queue
{
    private:
    Node* m_front;
    Node* m_rear;
    size_t m_size=0;
    public:
    Queue():m_front(NULL), m_rear(NULL)
    {
        //contructor;
    }
    void Push(int val)
    {
        Node* newNode = new Node(val);
        m_size++;
        if(m_front==NULL)
        {
            m_front=m_rear=newNode;
            return;
        }
        m_rear->m_next=newNode;
        m_rear=newNode;
    }

    int Pop()
    {
        if(m_front==NULL)
        {
            return -1;
        }
        Node* temp =m_front;
        int val=m_front->m_val;
        m_front=m_front->m_next;
        delete temp;
        m_size--;
        return val;
    }

    int Front()
    {
        if(Empty())
        {
            cout<<"queue is empty";
            return -1;
        }
        return m_front->m_val;
    }

    int Rear()
    {
        if(Empty())
        {
            cout<<"queue is empty";
            return -1;
        }
        return m_rear->m_val;
    }

    size_t Size()
    {
        return m_size;
    }

    bool Empty()
    {
        if(m_front==NULL) return true;
        else return false;
    }

};
int main()
{
    Queue Q;

    Q.Push(10);
    cout<<Q.Pop()<<endl;
    cout<<Q.Empty()<<endl;
    Q.Push(100);
    Q.Push(200);
    Q.Push(300);
    cout<<Q.Front()<<endl;
    cout<<Q.Rear()<<endl;
    cout<<Q.Empty()<<endl;
    cout<<Q.Size()<<endl;
    cout<<Q.Pop()<<endl;
}