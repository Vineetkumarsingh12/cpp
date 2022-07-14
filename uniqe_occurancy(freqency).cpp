#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      vector<int>  f(2003,0);
          for(int i : arr)
          {
              f[i+1000]++;
          }
        sort(f.begin(),f.end());
        for(int i=1;i<f.size();i++)
        {
            if(f[i]!=0 && f[i]==f[i-1])
            {
              return false;  
            }
        }
        return true;
        
    }
};

int main()
{  Solution v;
    vector <int> arr={1,2,2,1,1,3};
    cout<<v.uniqueOccurrences(arr);
    return 0;
}