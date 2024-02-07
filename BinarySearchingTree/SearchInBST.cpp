#include<iostream>
#include<math.h>
using namespace std;
struct Node
{
    int m_val;
    Node* m_left;
    Node* m_right;

    Node(int val)
    {
        m_left=m_right=NULL;
        m_val=val;
    }
};

//recursive method
bool searchinBST(Node* root, int value)
{
    if(root==NULL) return false;
    else if(root->m_val==value) return true;
    else if(root->m_val > value) searchinBST(root->m_left, value);
    else searchinBST(root->m_right, value);;
}

//itrative method 

bool searchinBSTItr(Node* root, int value)
{
    while(root!=NULL)
    {
        if(root->m_val==value) return true;
        else if(root->m_val > value) root=root->m_left;
        else root=root->m_right;
    }
}

int main()
{
    Node* root = new Node(15);

    root->m_left = new Node(5);
    root->m_left->m_left = new Node(3);

    root->m_right = new Node(20);
    root->m_right->m_left = new Node(18);
    root->m_right->m_left->m_left = new Node(16);
    root->m_right->m_right = new Node(80);

    int value=80;

    if(searchinBST(root, value))
    {
        cout<<"value found"<<endl;
    }
    else
    {
        cout<<"value not found"<<endl;
    }

    if(searchinBSTItr(root, value))
    {
        cout<<"value found"<<endl;
    }
    else
    {
        cout<<"value not found"<<endl;
    }
}