#include<bits/stdc++.h>
using namespace std;
int great(int a,int b)
{
    if(a>b)
    return a;    else
    return b;
}
int main()
{
    int a,b,c,d,x;
    cin>>a>>b>>c>>d;
    cout<<great(great(a,b),great(c,d));
    return 0;
}