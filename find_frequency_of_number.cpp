#include<bits/stdc++.h>
using namespace std;
int main()
{
// vector<vector<int>> vec(3,vector<int>(2,0))   declaration and creation of 2-D array.
int arr[10]={1,2,3,4,2,3,1,-1,3,2},f[10]={0};
for(int i=0;i<10;i++)
{
    if(arr[i]==-1)
    {
    f[i]+=1;
    for(int j=i+1;j<10;j++)
    {
    if(arr[j]==-1)
    f[i]+=1;
    }
    }
}
for(int i=0;i<10;i++)
{
    if(arr[i]!=-1)
    {
    f[i]+=1;
    for(int j=i+1;j<10;j++)
    {
    if(arr[j]==arr[i])
    {f[i]+=1;
    arr[j]=-1;
    }}
    }

}

for(int i=0;i<10;i++)
{
    if(f[i]!=0)
    {
        cout<<arr[i]<<" "<<f[i]<<endl;
    }
}
return 0;

}