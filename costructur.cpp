#include<bits/stdc++.h>
using namespace std;
class rectangle{
    private:
    int length,breath;
    public:
   /* rectangle()
    {
        length=1;   // Non-parameteries constructor
        breath=2;
    }*/
    rectangle(int a=1,int b=2){ //deafult argument
      setlength(a);  // parameteries constructor
      setbreath(b);   
    }
     rectangle(rectangle &x){
      length=x.length;  // copy-constructor  
      breath=x.breath;
    }
    int setlength(int a){
  if (a>0)
  length= a;
  else 
  length=1;
    }
    int setbreath(int b){
        if(b>0)
  breath=b;
  else
  breath=2;
    }
    int area()
    {
        return (length*breath);
    }

};
int main()
{
    rectangle x,y(x);
    cout<<y.area();
}
