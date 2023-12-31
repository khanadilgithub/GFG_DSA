#include<iostream>
#include<math.h>
using namespace std;

//Linked list node class can also be used in place of srtuct for node
struct Node
{
    int m_data; //for data
    Node *m_next;//for next pointer

    Node(const int val) //Node constructor
    :m_data(val),m_next(NULL)
    {}
};

//Linked list class 
class LinkedList
{
    private:
    //No private data or funtions
    public:
    Node *m_head = NULL, *m_tail=NULL; //head and tail node of linked list
    unsigned int m_size=0;

    void Insert(int x, int pos)
    {
        //Insert logic here
        m_size++;
    }

    void Push_front(int x)
    {
        //Insert at begining logic here
        m_size++;
    }
    void Push_back(int x)
    {
        //Insert at end logic here
        m_size++;
    }

    void Pop_front()
    {
        //delete at beggining logic here
        m_size--;
    }

    void Pop_back()
    {
        //delete at end logic here
        m_size--;
    }

    void Print(Node* head)
    {
        //print logic here
    }

    int Front()
    {
        return m_head->m_data;
    }
    int Back()
    {
        m_tail->m_data;
    }

    int Size()
    {
        return m_size;
    }
    
    //Begin and end need to be implimented to return the fornt and 
    //back iterator of the linked list

};

int main()
{

}