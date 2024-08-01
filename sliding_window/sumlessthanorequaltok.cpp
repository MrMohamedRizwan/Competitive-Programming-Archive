#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int k=5;
    int l=0,r=0;
    int ans=0;
    int n=5;
    int sum=0;
    while(r<n)
    {
        sum+=arr[r];
        while(sum>k)
        {
            sum-=arr[l];
            l++;
        }
        if(sum<=k)
        {
            cout<<l<<" ";
            ans=max(ans,r-l+1);
        }
        
            r++;
    }
    cout<<ans;
}