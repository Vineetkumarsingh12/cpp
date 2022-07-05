#include<iostream>
using namespace std;
class complex{
    private:
    int real,img;
    public:
    complex(int r,int i) {
     real=r;
     img=i;
    }
    friend ostream &operator<<(ostream &out,complex &c);
};
 ostream &operator<<(ostream &out,complex &c){
out<<c.real<<"+i"<<c.img<<endl;
return out;
 }
int main()
{
complex c(2,3),c2(4,5);
cout<<c<<endl<<c2;
}