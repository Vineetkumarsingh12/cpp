#include<bits/stdc++.h>
using namespace std;
void countingsort(int arr[],int size)
{
    int max=arr[0];
    for(int i=1;i<size;i++)
    if(arr[i]>max)
    max=arr[i];
    int output[max+1];
    int count[max+1]={0};    //initilize count as zero;


    for(int i=0;i<size;i++) 
    count[arr[i]]++;       // counting occurences

    for(int i=1;i<=max;i++)
    count[i]+=count[i-1];       // cumulative sum to find right index

    for(int i=size-1;i>=0;i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }

    for(int i=0;i<size;i++)
    arr[i]=output[i];

}
int main()
{
int arr[6]={1,3,2,2,3,1};
countingsort(arr,6);
for(int i=0;i<6;i++)
cout<<arr[i]<<" ";
return 0;
}