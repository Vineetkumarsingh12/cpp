#include<bits/stdc++.h>
using namespace std;
void binary(int b){
    if(b==0 || b==1){
    cout<<b;
    return ;
    }
    binary(b/2);
    cout<<b%2;

}
int main()
{int b=4;
binary(b);
return 0;
}
