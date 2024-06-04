#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int mod=1e9+7;
void fact(int n)
{
    vector<ll>dp(n+1,0);
    dp[0]=1;
    for(ll i=1;i<=n;i++)
    {
        dp[i]=(dp[i-1]*static_cast<ll>(1)*i)%mod;
    }
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<dp[i]<<" ";
    // }
    cout<<dp[n];
}

void solve()
{
    int n=90;
    fact(n);

}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
    #endif
  int t=1;
  //cin>>t;
  while(t--){
    solve();
  }
  return 0;

}
