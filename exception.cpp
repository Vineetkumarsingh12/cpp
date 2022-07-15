// //Normal exception.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a=1,b=0;
//     float c=1.2;
//     try
//     {
//         if(b!=0)
//         a=a%b;
//         else
//         throw b;
//     }
//     catch(int e)
//     {
//     cout<<e;
//        }
// }
//exception of function
// #include<bits/stdc++.h>
// using namespace std;
// void division(int a,int b) throw(string)
// {
//     if(b!=0)
//     a=a/b;
//     else
//     throw string("divisble by zero");
//     // throw 'b';
//     // throw 4;
// }
// int main()
// {
// int a=1,b=0;
// try{
//     division(a,b);
// }
// catch(string c )
// {
//     cout<<c;
// }
// return 0;
// }

// nested _exception
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a=0,b=0;
//     try{
//         try{
//         if(b!=0)
//         {cout<<"external";
//             b=a/b;
//         }
//         else
//         throw  3;
//         }
//         catch(int x)
//         {
//             cout<<"external";
//          if(b!=0)   
//          {
//             cout<<"success";
//          }
//          else
//          throw string("nested try");
//         }
//     }
//     catch(string x)
//     {
// cout<<x;
//     }
//     return 0;
// }


// class exception--->Derived class exception first then base class exception.
// C++ Program to demonstrate a catching of
// Derived exception and printing it successfully
#include <iostream>
using namespace std;

class Base {};
class Derived : public Base {};
int main()
{
	Derived d;
	// Some other functionalities
	try {
		// Monitored code
		throw d;
	}
	catch (Derived d) {
		cout << "Caught Derived Exception";
	}
	catch (Base b) {
		cout << "Caught Base Exception";
	}
	getchar(); // To read the next character
	return 0;
}
