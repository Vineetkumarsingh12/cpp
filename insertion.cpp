#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n)
{
    int key;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]<key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;

    }
}
int main()
{
    int arr[5]={3,7,4,2,9};
    insertionsort(arr,5);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    return 0;
}