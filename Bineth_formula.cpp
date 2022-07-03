#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter term number";
    cin>>n;
    cout<<(pow((1+sqrt(5)),n)-pow((1-sqrt(5)),n))/(pow(2,n)*sqrt(5));
    return 0;

}