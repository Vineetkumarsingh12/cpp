#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,rev=0,i,count1=0,count2=0,r;
cin>>n;
if(n==0)
cout<<"zero";
else{
    count1=int(log10(n))+1;
    while(n!=0){

    rev=rev*10+n%10;
    n/=10;
    }
count2=int(log10(rev))+1;
while(rev!=0)
{
    r=rev%10;
    rev=rev/10;
    switch (r)
    {
    case 0:
    cout<<"zero ";
        break;
    case 1:
    cout<<"one ";
    break;
    case 2:
    cout<<"two ";
    break;
    case 3:
    cout<<"three ";
    break;
    case 4:
    cout<<"four ";
    break;
    case 5:
    cout<<"five ";
    break;
    case 6:
    cout<<"six ";
    break;
    case 7:
    cout<<"seven ";
    break;
    case 8:
    cout<<"eight ";
    break;
    case 9:
    cout<<"nine ";
    }
    for(i=1;i<=(count1-count2);i++)
    cout<<"zero ";
}
}
}