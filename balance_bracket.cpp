#include<bits/stdc++.h>
using namespace std;
bool bracketchecker(string s)
{
    stack<char> st;
    
    if(s[0]=='}'||s[0]==']'||s[0]==')'){return false ;}
    if(s[s.size()-1]=='['||s[s.size()-1]=='{'||s[s.size()-1]=='('){return false ;}
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{')
        st.push(s[i]);
        else if(i==s.size()-1 && st.empty())
        {
            return false;
        }
        else 
         {
            
            switch (s[i])
            {
            case '}':
                if(st.top()=='{')
                st.pop();
                else
                return false;
                break;
            case ']':
                if(st.top()=='[')
                st.pop();
                else
                return false;
                break;
            case ')':
                if(st.top()=='(')
                st.pop();
                else
                {
                return false;
                }
                break;  
            }
         }

    }

if(st.empty())
return true;
else 
return false;

}
int main()
{
    string s="{})";
    cout<<bracketchecker(s);

return 0;
}
