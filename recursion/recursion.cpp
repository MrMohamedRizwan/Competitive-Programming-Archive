#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int sum(int n)
{
    if(n==0)
    return 0;
    return n+sum(n-1);
}
void solve()
{
    cout<<sum(5);

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
