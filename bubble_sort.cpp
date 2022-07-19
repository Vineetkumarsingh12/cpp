#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-1-i;j++)
        if(arr[j]>arr[j+1])
        {
        arr[j]=arr[j]^arr[j+1];
        arr[j+1]=arr[j]^arr[j+1];
        arr[j]=arr[j]^arr[j+1];
        // swap(arr[j],arr[j+1]);
        }

}
int main()
{
    int arr[5]={2,5,2,8,4};
    bubblesort(arr,5);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    return 0;
}