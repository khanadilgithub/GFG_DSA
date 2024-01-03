#include<iostream>
#include<queue>
#include<stack>
using namespace std;

//iterativ way to reverse queue

void reverseQueue(queue<int> &q)
{
    stack<int> st;

    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
}

//Recursive method of reversing queue

void reverseQueueRec(queue<int> &q)
{
    if(q.empty()) return;

    int val = q.front();
    q.pop();

    reverseQueueRec(q);
    q.push(val);
}

int main()
{
    queue<int> Q;

    for(int i=1; i<10; i++)
    {
        Q.push(i*10);
    }

    reverseQueue(Q);

    reverseQueueRec(Q);
}