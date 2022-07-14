#include<bits/stdc++.h>
using namespace std;
class car{
    public:
    virtual void start()
    {cout<<"car is start"<<endl;}
    virtual  void stop()=0;
    // {cout<<"car is stop"<<endl;}
};
class BMW:public car{
    public :
    // void start()
    // {cout<<"BMW is start"<<endl;
    // cout<<"pure"<<endl;}
    void stop()
    {cout<<"BMW is stop"<<endl;}
};
class lmbo:public car{
    public :
    void start()
    {cout<<"lmbo is start"<<endl;}
    void stop(){cout<<"lmbo is stop"<<endl;}
};
int main()
{
    BMW a;
    lmbo b;
car *p=&a;
p->start();
//  p=&b;
// p->start();

}