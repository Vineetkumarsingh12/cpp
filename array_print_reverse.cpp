#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i; // array initilize after  size entery
    for(i=0;i<n;i++)
    {
cin>>arr[i];
    }
    for(i=n-1;i>=0;i--)
    {
cout<<arr[i]<<" ";
    }
}