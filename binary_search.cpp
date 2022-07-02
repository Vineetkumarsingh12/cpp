#include<bits/stdc++.h>
using namespace std;
int binserach(int arr[],int l,int r,int key)
{int mid;
while(1)
{
if(l>r)
 {
    cout<<"Number is not found";
    exit(0);
 } 
 else
 {
    mid=(l+r)/2;
    if(arr[mid]==key)
    return mid;
    else if(arr[mid]<key)
    l=mid+1;
    else 
    r=mid-1;
 }
}
    
}
int main()
{
    int arr[5]={1,2,3,4,5},l=0,r=sizeof(arr)/sizeof(arr[0])-1,key=1;
    cout<<r<<endl;
   cout<<binserach(arr,l,r,key);
}