#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int>& findDuplicates(vector<int>& nums) {
        vector<int> v;
     sort(nums.begin(),nums.end()); 
     for(int i=1;i<nums.size();i++)
     if(nums[i]==nums[i-1])
     v.push_back(nums[i]);
     return v;
    }
};
int main()
{   Solution f;
    vector<int> nums={1,1,2};
    vector<int> &a=f.findDuplicates(nums);
    for(int i:a)
    cout<<i<<" ";

}