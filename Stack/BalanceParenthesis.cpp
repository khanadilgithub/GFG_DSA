#include<iostream>
#include<stack>
using namespace std;

bool match(const char a, const char b)
{
    return ((a=='('&&b==')') || (a=='['&&b==']') || (a=='{'&&b=='}'));
}

bool checkParenthesis(string &str)
{
    int n =str.size();
    stack<char> st;
    for(auto ch: str)
    {
        if(ch=='(' || ch=='{' || ch=='[')
        {
            st.push(ch);
        }
        else
        {
            if(st.empty()) return false;

            if(!match(st.top(),ch)) return false;
            else st.pop();
        }
    }

    return st.empty()==true;
}

int main()
{
    string str1 = "[()]{}{[()()]()}";

    string str2 = "[()]{}{[()()]()}}";

    cout<<checkParenthesis(str1)<<endl;

    cout<<checkParenthesis(str2)<<endl;
}