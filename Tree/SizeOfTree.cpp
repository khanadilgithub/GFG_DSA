#include<iostream>
#include<math.h>
using namespace std;

struct Node
{
    int m_key;
    Node* m_left;
    Node* m_right;

    Node(int val)
    {
        m_key=val;
        m_left=NULL;
        m_right=NULL;
    }
};

int treeSize(Node* root)
{
    if(root==NULL)
      return 0;
    else 
    {
        //cout<<root->m_key<<endl;
        return 1+treeSize(root->m_left)+treeSize(root->m_right);
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

    cout<<"size of tree is: "<<treeSize(root)<<endl;
}