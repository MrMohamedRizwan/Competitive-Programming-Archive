#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// here l value is from 10^6 to r value from 10^6+10^12

vector<int> sieveOfEratoses(int n)
{
    vector<bool>par(1000,true);
    for(int i=2;i*i<=n;i++)
    {
        if(par[i]==true)
        {
            for(int j=2;i*j<=n;j++)
            {
                par[i*j]=false;
            }
        }
    }
    // 2)storeing it in vector 
    vector<int> primes;
    for(int i=2;i<=n;i++)
    {
        if(par[i]==true)
        primes.push_back(i);
        // cout<<i<<" " ;
    }
    return primes;

}

// no of primes from range of left to right
// this canbe travered from left to right segmented sive is found out to reduce space
vector<ll> segmentedSieve(ll l,ll r)
{
    vector<int>primes=sieveOfEratoses(r);
    vector<bool>segSieve(r-l+1,true);
    for(ll p:primes)
    {
        for(ll d=l/p;d*p<=r;d++)
        {
            segSieve[p*d]=false;
        }
    }
    vector<ll> ans;
    for(ll i=0;i<=r-l+1;i++)
    {
        if(segSieve[i])
        ans.push_back(l+i);
    }
    return ans;

}
void solve()
{
    // 1)sieve of eratosthes
    int n=50;
    // sieveOfEratoses(n);
    segmentedSieve(0,n);
    // cout<<5;

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
