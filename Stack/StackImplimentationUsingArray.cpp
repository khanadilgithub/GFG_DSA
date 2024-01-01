#include<iostream>
#include<math.h>
using namespace std;

//STL vector can aslo be use to povide dynamic size

class Stack
{
    private:
    int *m_arr;
    int m_top;
    int m_cap;
    public:

    Stack():m_arr{0}, m_top(-1),m_cap(5)
    {
        m_arr = new int [m_cap];
    }
    void push(int val)
    {
        if(m_top==m_cap-1)
        {
            int *tmptr = new int[m_cap*2];
            for(int i=0; i<m_cap; i++)
            {
                tmptr[i]=m_arr[i];
            }
            m_cap*=2;
            delete m_arr;
            m_arr=tmptr;
        }
        m_arr[++m_top]=val;
    }

    int pop()
    {
        if(m_top==-1)
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return m_arr[m_top--];
    }
    int size()
    {
        return m_top+1;
    }

    bool empty()
    {
        if(m_top==-1) return true;
        else return false;
    }

    int peek()
    {
        return m_arr[m_top];
    }

    void print()
    {
        for(int i=0; i<=m_top; i++)
        {
            cout<<m_arr[i]<<" ";
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