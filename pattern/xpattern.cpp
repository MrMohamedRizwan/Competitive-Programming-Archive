#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


void solve()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)
            cout<<i;
            else if(j==n-i+1)
            cout<<j;

            else
            cout<<" ";
        }
        cout<<endl;
    }

}


int main(){
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   srand(chrono::high_resolution_clock::now().time_since_epoch().count());
//     #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//     #endif
  int t=1;
  //cin>>t;
  while(t--){
    solve();
  }
  return 0;

}
