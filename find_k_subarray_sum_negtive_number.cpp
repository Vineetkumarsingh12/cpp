// // find k sub array sum
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int arr[5]={10,2,-2,-20,10};
// int size=5;                                           // Time complexity is O(n*n) and space O(1).
// int sum=-10;
// int current_sum=0;
// for(int i=0;i<size;i++)
// for(int j=i;j<size;j++)
// {
//     current_sum=current_sum+arr[j];
//     if(current_sum==sum)
//     {
//         cout<<"index of subarray "<<i<<" "<<j;
//         return 1;
//     }
// }
// cout<<"No subarray found";
// return 0;

// }



#include<bits/stdc++.h>
using namespace std;
int main()
{  unordered_map<int,int> m;
    int arr[5]={10,2,-2,-20,10};
    int size=5,sum=2,current_sum=0;
    for(int i=0;i<size;i++)
    {
        current_sum+=arr[i];
        if(current_sum==sum)
        {
            cout<<"subarray sum found "<<"0 "<<i;
            return 1;
        }
        if(m.find(current_sum-sum)!=m.end())
        {
            cout<<"sub array found "<<m[current_sum-sum]+1<<" "<<i;
            return 1;
        }
        m[current_sum]=i;

    }
    cout<<"subarray not found";
    return 0;
}