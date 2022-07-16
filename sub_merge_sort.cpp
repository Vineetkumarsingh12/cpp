#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1=2,n2=3,i=0,j=0,k=0,arr1[2]={1,3},arr2[3]={2,4,6},n3=n1+n2,arr3[n3];
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }

    }
    while(i<n1)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    for(i=0;i<n3;i++)
    {
        cout<<arr3[i]<<endl;
    }
}