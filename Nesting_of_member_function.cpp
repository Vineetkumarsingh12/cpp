#include<bits/stdc++.h>
using namespace std;
class binary
{
    void check_bin(void);
    string s;
    public:
    void read(void);
    void ones_complement(void);
    void display(void);
};
// nesting_of_member_function.
void binary :: read(void)
{
    cout<<"enter a binary number"<<endl;
    cin>>s;
    check_bin();  // we can access check_bin(private function) through another public function.
}
void binary :: check_bin(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"incorrect binary number"<<endl;
            exit(0);
        }
    }
}
void binary :: ones_complement(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        s.at(i)='1';
        else
        s.at(i)='0';
    }
}
void binary :: display(void)
{
cout<<"dispaying your binary number"<<endl;
for(int i=0;i<s.length();i++)
{
    cout<<s.at(i);
}
cout<<endl;
}
int main()
{
    binary b;
    b.read();
    // b.check_bin();// we don't access here because bydefault this is private function.
    b.ones_complement();
    b.display();
    return 0;
}