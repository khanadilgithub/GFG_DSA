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

void inorderTravesal(Node* root)
{
    if(root==NULL) return ;
    inorderTravesal(root->m_left);
    cout<<root->m_data<<" ";
    inorderTravesal(root->m_right);
}

void preorderTravesal(Node* root)
{
    if(root==NULL) return ;
    cout<<root->m_data<<" ";
    preorderTravesal(root->m_left);
    preorderTravesal(root->m_right);
}

void postorderTravesal(Node* root)
{
    if(root==NULL) return ;
    postorderTravesal(root->m_left);
    postorderTravesal(root->m_right);
    cout<<root->m_data<<" ";
}

int treeHight(Node* root)
{
    if(root==NULL) return 0;
    else 
    {
        return max(treeHight(root->m_left),treeHight(root->m_right))+1;
    }
}

int main()
{
    Node* root = new Node(10);

    root->m_left=new Node(30);

    root->m_right=new Node(20);

    root->m_left->m_left=new Node(40);
    root->m_left->m_right=new Node(50);

    inorderTravesal(root);
    cout<<endl;
    preorderTravesal(root);
    cout<<endl;
    postorderTravesal(root);
    cout<<endl;

    cout<<"Hight of tree is: "<<treeHight(root)<<endl;
}