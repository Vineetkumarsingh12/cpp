#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid,int h)
{int leftindex=mid-l+1,rightindex=h-mid;
int arr1[leftindex],arr2[rightindex];
for(int i=0;i<leftindex;i++)
arr1[i]=arr[l+i];
for(int i=0;i<rightindex;i++)
arr2[i]=arr[mid+i+1];
int i=0,j=0,k=l;
    while(i<leftindex && j<rightindex)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr[k]=arr2[j];
            j++;
            k++;
        }

    }
    while(i<leftindex)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<rightindex)
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int l,int h)
{
int mid;
if(l<h){
mid=(l+h)/2;
mergesort(arr,l,mid);
mergesort(arr,mid+1,h);
merge(arr,l,mid,h);
}
}
int main()
{
int arr[6]={9,6,5,0,8,2};
mergesort(arr,0,sizeof(arr)/sizeof(arr[0])-1);
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
cout<<arr[i]<<endl;
return 0;
}
