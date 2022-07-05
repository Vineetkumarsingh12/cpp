#include<bits/stdc++.h>
using namespace std;
class test
{
int a;
int *b;
public:
test(int x){
    a=x;
    b=new int [a];

}
test(test &p)
{
    a=p.a;
    // b=p.b; // we don't do this because this point same address of p.
    b=new int [a];
}
};
int main()
{
 test p(3),q(p);
}