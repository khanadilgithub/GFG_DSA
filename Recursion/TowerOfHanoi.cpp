#include<iostream>
#include<math.h>
using namespace std;

void TOH(int numofdisc, char A, char B, char C)
{
    if(numofdisc==1)
    {
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    TOH(numofdisc-1, A, C, B);
    cout<<"Move "<<numofdisc<<" form "<<A<<" to "<<C<<endl;
    TOH(numofdisc-1, B, A, C);

}

int main()
{
    int numofdisc=5;
    TOH(numofdisc, 'A','B','C');
}