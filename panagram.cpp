#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abcABCzZ";
    int arr[26]={0};
    for(int i=0;i<s.size();i++)
    {
    if(s[i]>='a'&& s[i]<='z')
    arr[s[i]-'a']++;
     if(s[i]>='A' && s[i]<='Z')
    arr[s[i]-65]++;
    }
    for(int i=0;i<26;i++)
    {
    if(s[i]==0)
    {
    cout<<"Not Panagram"<<endl;
    // exit(0);
    return 0;
    }
    }
    cout<<"Pangram"<<endl;;
    return 0;
}