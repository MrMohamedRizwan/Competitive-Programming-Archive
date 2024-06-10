#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(s1.size()!=s2.size())
    {
        cout<<"false";
        return;
    }
    unordered_map<char,int>freq1;
    unordered_map<char,int>freq2;
    for(auto ch:s1)
    freq1[ch]++;
    for(auto ch:s2)
    freq2[ch]++;
    vector<int>a;
    vector<int>b;
    for(auto it:freq1)
    {
        a.push_back(it.second);
    }
    // cout<<endl;
    for(auto it:freq2)
    {
        b.push_back(it.second);
    }
    // cout<<endl;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"false";
            return ;
        }
    }
    // for(auto [c,v]:freq1)
    // {
    //     if(freq2.find(v)!=freq1.end())
    //     {
    //         cout<<"false";
    //         return ;
    //     }
    // }

    cout<<"true";
}



bool check(string s, string t) 
{
    vector<int>freq1(200, 0); 
    vector<int>freq2(200, 0);
    
    
    if(s.length()!=t.length()) 
    { 
        return false;
    }
    int n=s.length(); 
    
    for(int i=0;i<n;i++) 
    { 
        if(freq1[s[i]]!=freq2[t[i]]) 
        {
            return false;
        }
        
        freq1[s[i]]=i + 1; 
        freq2[t[i]]=i + 1;
    }
    
    return true; 
}
void solve1()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(check(s1,s2))
    cout<<"true";
    else
    cout<<"false";
}
int main()
{
    int t=1;
    while(t--)
    {
        // solve();
        solve1();
        cout<<check("egg","dad");
    }
}