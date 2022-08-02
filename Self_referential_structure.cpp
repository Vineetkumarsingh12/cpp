/* Self referential structure--> are those structure that have one or more pointers which point to same type of structure,as their member.

These are two type:
1.Self Referentail structure with Single Link.
2.Self Referentail structure with Multilink.   */


// Self Referentail structure with Single Link


// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data1;
//     char data2;
//     struct node* link;
// };
// int main()
// {
//     struct node ob1;
//     ob1.link=NULL;
//     ob1.data1=10;
//     ob1.data2='A';
//     struct node ob2;
//     ob2.link=NULL;
//     ob2.data1=30;
//     ob2.data2='B';
//     // linking ob1 and ob2
//     ob1.link=&ob2;
//     // Accessing data members of ob2 using ob1
//     cout<<ob1.link->data1<<endl;
//     cout<<ob1.link->data2<<endl;
// }
// self referentail with multi link
  #include<bits/stdc++.h>
  using namespace std;
  struct node{
    int data;
    struct node* prev_link;
    struct node* next_link;

  };
  int main()
  {
struct node ob1;
ob1.prev_link=NULL;
ob1.next_link=NULL;
ob1.data=10;
struct node ob2;
ob2.prev_link=NULL;
ob2.next_link=NULL;    // '.' Access the members of structure.
                     // '->' Access the members of structure using pointer.
ob2.data=20;
struct node ob3;
ob3.prev_link=NULL;
ob3.next_link=NULL;
ob3.data=30;

// Forward links 
ob1.next_link=&ob2;
ob2.next_link=&ob3;

// Backword links
ob2.prev_link=&ob1;
ob3.prev_link=&ob2;

// Accessing data of ob1 and ob3 by ob1

cout<<ob1.data<<endl;
cout<<ob1.next_link->data<<endl;
cout<<ob1.next_link->next_link->data<<endl;

//  Accessing data of ob1 and ob3 by ob2
 cout<<ob2.prev_link->data<<endl;
 cout<<ob2.data<<endl;
 cout<<ob2.next_link->data<<endl;

 //  Accessing data of ob1 and ob2 by ob3
 cout<<ob3.prev_link->prev_link->data<<endl;
 cout<<ob3.prev_link->data<<endl;
 cout<<ob3.data<<endl;

 return 0;

  }