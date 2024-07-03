#include<bits/stdc++.h>
using namespace std;
int call(int n)
{
    if(n==0)
    return 0;
    return n+call(n-1);
}
void subsequence(int i,int n,vector<int>&arr,vector<int>&ans)
{
    if(i>=n)
    {
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    ans.push_back(arr[i]);
    subsequence(i+1,n,arr,ans);
    ans.pop_back();
    subsequence(i+1,n,arr,ans);
    return ;
}
int main()
{   
    cout<<call(5);
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    int n=arr.size();
    vector<int>ans;
    subsequence(0,n,arr,ans);

}