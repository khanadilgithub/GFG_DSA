#include<iostream>
#include<math.h>
using namespace std;

struct Node
{
    int m_data;
    Node* m_next;

    Node(int x):m_data(x),m_next(NULL)
    {}
};

class Stack
{
    private:
    size_t m_size;
    Node* m_head;
    public:

    Stack():m_size(0),m_head(NULL)
    {}
    void push(int val)
    {
        Node* newNode = new Node(val);

        newNode->m_next=m_head;

        m_head=newNode;
        m_size++;
    }

    int pop()
    {
        if(m_head==NULL)
        {
            cout<<" stack is empty"<<endl;
            return -1;
        }
        Node* cur = m_head;
        int val=cur->m_data;
        m_head=m_head->m_next;
        delete cur;
        m_size--;
        return val;
    }

    int size()
    {
        return m_size;
    }

    bool empty()
    {
        if(m_head==NULL) return true;
        else return false;
    }

    int peek()
    {
        return m_head->m_data;
    }

    void print()
    {
        Node* cur=m_head;

        while(cur!=NULL)
        {
            cout<<cur->m_data<<" ";
            cur=cur->m_next;
        }
        cout<<endl;
    }
};

int main()
{
    Stack st;

    st.pop();

    st.push(2);
    st.push(3);

    cout<<st.peek()<<endl;

    cout<<st.size()<<endl;

    cout<<st.empty()<<endl;

    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;

    cout<<st.empty()<<endl;

    st.push(12);
    st.push(30);

    st.push(20);
    st.push(13);

    st.push(10);
    st.push(111);

    st.push(100);
    st.push(1111);

    cout<<st.peek()<<endl;

    cout<<st.size()<<endl;

    st.print();

}