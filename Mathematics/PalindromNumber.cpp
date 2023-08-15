#include<iostream>
#include<string>
using namespace std;

//Method1 to find palindrom number 
bool palindromeNum(int num)
{
    string numstr= to_string(num);
    int left=0, right=numstr.size()-1;

    while(left<right)
    {
        if(numstr[left]!= numstr[right])
        return false;

        left++;
        right--;
    }
    return true;
}
//Method2 to find palindrom number 
bool palindromNum(int num)
{
    int rev=0;
    int temp=num;
    while(temp)
    {
        rev=rev*10;
        rev=rev+temp%10;
        temp=temp/10;
    }
    return num==rev;
}

int main()
{
    int number1= 12321;
    int number2=4553;

    cout<<"method1"<<endl;
    cout<<palindromeNum(number1)<<endl;
    cout<<palindromeNum(number2)<<endl;

    cout<<"method2"<<endl;
    cout<<palindromNum(number1)<<endl;
    cout<<palindromNum(number2)<<endl;


}