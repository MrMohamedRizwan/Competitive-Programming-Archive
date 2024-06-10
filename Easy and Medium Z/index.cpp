#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// bool checksame(vector<int>&suffix,vector<int>&prefix,int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(prefix[i]==suffix[i])
//         return true;
//     }
//     retur
// }
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arr={5,6,8,11};
    vector<int>presum(n);
    vector<int>sufsum(n);
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        presum[i]=sum;
    }
    sum=0;
    for(int i=n-1;i>=0;i--)
    {
        sum+=arr[i];
        sufsum[i]=sum;
    }
    cout<<"output\n";

    for(int i=1;i<n-1;i++)
    {
        if(presum[i]==sufsum[i])
        {
            cout<<"true"<<endl;
            return ;
        }
    }
    cout<<"false"<<endl;

}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}