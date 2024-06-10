#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool solve(string a,string b,string x)
{
    int i=0,j=0,k=0;
    while(i<x.size())
    {
        if(x[i]==a[j])
        {
            while(x[i]==a[j])
            i++,j++;
        }
        else if(x[i]==b[k])
        {
            while(x[i]==b[k])
            i++,k++;
        }
        else
        return false;
    }
     i=x.size()-1;
     j=a.size()-1;
     k=b.size()-1;
    while(i>=0)
    {
        if(x[i]==a[j])
        {
            while(x[i]==a[j])
            i--,j--;
        }
        else if(x[i]==b[k])
        {
            while(x[i]==b[k])
            i--,k--;
        }
        else
        return false;

    }

    return true;
}
int main()
{
    string s1,s2,x;
    // cin>>s1;
    // cin>>s2;
    // cin>>x;
    s1="abc";
    s2="def";
    x="adbcef";
    cout<<solve(s1,s2,x);

}