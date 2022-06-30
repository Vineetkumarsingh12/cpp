#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=2,b=2,c=5;
    if(a<0||b<0||c<0||(a+b<=c)||(a+c<=b||b+c<=a))
    cout<<"triangled is not possible";
    else{
        int s=(a+b+c)/2;
        float result=float(sqrt(s*(s-a)*(s-b)*(s-c)));
        cout<<result;
    }
    return 0;
}