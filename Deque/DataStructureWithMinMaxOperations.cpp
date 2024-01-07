#include<iostream>
#include<deque>
#include<math.h>
using namespace std;

class MinMaxOperDs
{
    private:
    deque<int> dq;
    public:
    MinMaxOperDs()
    {
        //default Constructor
    }
    void insertMin(int val)
    {
        dq.push_front(val);
    }
    void insertMax(int val)
    {
        dq.push_back(val);
    }
    int getMin()
    {
        return dq.front();
    }
    int getMax()
    {
        return dq.back();
    }
    int ExtractMin()
    {
        if(dq.empty()) return -1;
        int minval=dq.front();
        dq.pop_front();
        return minval;
    }
    int ExtractMax()
    {
        if(dq.empty()) return -1;
        int maxval=dq.back();
        dq.pop_back();
        return maxval;
    }

    size_t getSize()
    {
        return dq.size();
    }
};

int main()
{
    MinMaxOperDs minMaxDs;
    minMaxDs.insertMin(5);
    minMaxDs.insertMax(10);
    minMaxDs.insertMin(3);
    minMaxDs.insertMax(15);
    minMaxDs.insertMin(2);
    cout<<minMaxDs.getMin()<<endl;
    cout<<minMaxDs.getMax()<<endl;
    minMaxDs.insertMin(1);
    cout<<minMaxDs.getMin()<<endl;
    minMaxDs.insertMax(20);
    cout<<minMaxDs.getMax()<<endl;
    cout<<minMaxDs.getSize()<<endl;
}