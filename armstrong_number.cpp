#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,copy,digit,c;
       // loga base b=(loga base 2)/(logb base 2)
       cout<<"enter a number"<<endl;
       cin>>n;
       digit=int(log10(n))+1;
       cout<<digit<<endl;
       copy=n;
       while(n!=0){
    //    c=floor(pow(int(n%10),int(digit))+.5);
        sum=sum+floor(pow(n%10,digit));
        // sum=sum+float(pow(n%10,digit));
        cout<<pow(int(n%10),int(digit))+.5<<" "<<sum<<endl;
        n=n/10;

       }

       if(copy==sum)
       cout<<"Armstrong number";
       else
       cout<<"Not Armstrong number";
       return 0;
    // int n=5,a;
    // float b;
    // cout<<pow(5,3)<<endl;
    // a=pow(5,3);
    // cout<<a<<endl;
    // b=pow(5,3);
    // cout<<b;
}