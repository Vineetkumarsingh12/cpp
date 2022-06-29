#include<bits/stdc++.h>
using namespace std;
int & swaprefer(int &x, int &y)
{int temp;
    temp=x;
    x=y;
    y=temp;
    return x;

}
int main()
{
    int a=5,b=6;
    swaprefer(a,b)=7;
    cout<<a<<endl<<b;
}
