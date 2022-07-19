#include <bits/stdc++.h>
using namespace std;
int precedence(char p)
{   
    if (p == '%' || p == '*' || p == '/')
        return 2;
    else if (p == '+' || p == '-')
        return 1;
    else
        return -1;
}
void infixpostfix(string s)
{
    string output;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))   // firt codition for operend
            output += s[i];
        else if (s[i] == '(')
            st.push('(');
        else if (s[i] == ')')
        {
            while (st.top() != '(')
            {                                        //second and third condition for bracket
                output += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && precedence(s[i]) <= precedence(st.top()))
            {
                output+=st.top();                               //fourth condition for operator
                st.pop();
            }
            st.push(s[i]);
        }

    }
    while(!st.empty())
    {                                                       //this is for remaning operator.
        output+=st.top();
        st.pop();
    }
    cout<<output;
}
    int main()
    {
        string s = "a+b*d";
        infixpostfix(s);
        return 0;
    }