#include<bits/stdc++.h>
using namespace std;
class emp
{
    private:
    int a,b,c;
    public:
    int d,e;
    void change(int a1,int b1,int c1); // declartion
    void print()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    }
};
void emp :: change(int a1,int b1,int c1)  // :: data visulition operator
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    emp vin;
    // vin.a=4;   // be chane value of a,b and c because these ate private data type.
    vin.d=1;  // be change value of d and e because these are public data type.
    vin.e=2;
    vin.change(3,4,5);
    vin.print();
    return 0;
}
