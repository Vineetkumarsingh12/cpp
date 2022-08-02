#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left,*right;
};
 struct Node* newNode(int data)
{
   struct Node *temp=new Node; 
   temp->data=data;
   temp->left=temp->right=NULL;
   return temp;
}
void printPreorder(struct Node *node)
{
    if(node==NULL)
    return ;
    cout<<node->data<<" ";
    printPreorder(node->left);
    printPreorder(node->right);


}
void printPostorder(struct Node *node)
{
    if(node==NULL)
    return ;
    printPostorder(node->left);
    printPostorder(node->right);
    cout<<node->data<<" ";
}
void printInorder(struct Node *node)
{
    if(node==NULL)
    return ;
    printInorder(node->left);
    cout<<node->data<<" ";
    printInorder(node->right);


}

int main()
{
    struct Node * root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    cout<<"Preorder travesal of binary tree is"<<endl;
     printPreorder(root);
    cout<<"\nInorder travesal of binary tree is"<<endl;
    printInorder(root);
    cout<<"\nPostorder travesal of binary tree is"<<endl;
    printPostorder(root);
    delete(root);
}

