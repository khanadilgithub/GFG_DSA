#include<iostream>
#include<math.h>
using namespace std;

struct Node
{
    int m_data;
    Node* m_left;
    Node* m_right;
    Node(int val):m_data(val), m_left(NULL),m_right(NULL)
    {
        //constructor
    }
};

class BinaryTree
{
    private:
    public:
    Node* m_root;
    BinaryTree():m_root(NULL)
    {
        //constructor
    }
    void push(int val)
    {
        Node* temp= new Node(val);

        if(m_root==NULL)
        {
            m_root=temp;
            //cout<<"inside if"<<endl;
        }
        else
        {
            //cout<<"inside else"<<endl;
            Node* cur=m_root;
            while(cur!=NULL)
            {
                if(cur->m_data>=val)
                {
                    cur=cur->m_left;
                }
                else
                {
                    cur=cur->m_right;
                } 
            }
            cur=temp;
        }
    }

    void pop()
    {

    }

    void inorderTravesal()
    {
        Node* cur=m_root;
        while(cur !=NULL)
        {
            cout<<cur->m_data;
            cur=cur->m_left;
        }
    }

    void preorderTravesal()
    {
        
    }

    void postorderTravesal()
    {
        
    }

};
int main()
{
    BinaryTree bt;
    bt.push(10);
    bt.push(7);
    bt.push(6);
    bt.push(8);
    bt.push(9);
    bt.push(5);
    bt.push(3);
    bt.inorderTravesal();
}