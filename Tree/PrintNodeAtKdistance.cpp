#include<iostream>
#include<math.h>
using namespace std;

struct Node
{
    int m_data;
    Node* m_left;
    Node* m_right;

    Node(int val)
    {
        m_data=val;
        m_left=NULL;
        m_right=NULL;
    }
};
void printKdistance(Node* root, int k)
{
    if(root==NULL) return;

    if(k==0)
    {
        cout<<root->m_data<<" ";
    }
    else
    {
        printKdistance(root->m_left, k-1);

        printKdistance(root->m_right, k-1);
    }
}

int main()
{
    Node* root = new Node(10);

    root->m_left=new Node(30);

    root->m_right=new Node(20);

    root->m_left->m_left=new Node(40);
    root->m_left->m_right=new Node(50);

    root->m_right->m_left=new Node(60);
    root->m_right->m_right=new Node(70);
    int k=2;
    printKdistance(root, k);
}