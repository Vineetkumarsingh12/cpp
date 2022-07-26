#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][4]={{1,2,3,10},
                {4,5,6,11},
                {7,8,9,12}

    };
    int startingrow=0,startingcoloum=0,i,m=3,n=4;
    while(startingrow<m && startingcoloum<n)
    {
        for(int i=startingcoloum;i<n;i++)
        cout<<arr[startingrow][i]<<" ";
        startingrow++;
        for(int i=startingrow;i<m;i++)
        cout<<arr[i][n-1]<<" ";
        n--;
        if(startingrow<m){
        for(int i=n-1;i>=startingcoloum;i--)
        cout<<arr[m-1][i]<<" ";
        m--;
        }
        if(startingcoloum<n)
        {
            for(int i=m-1;i>=startingrow;i--)
            cout<<arr[i][startingcoloum]<<" ";
            startingcoloum++;
        }
    }
        
}