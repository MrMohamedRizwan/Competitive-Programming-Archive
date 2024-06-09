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
void solve1()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n-i;j++)
      cout<<" ";

      for(int j=i;j>=0;j--)
      cout<<j;
      for(int j=1;j<=i;j++)
      cout<<j;
      // for(int j=0;j<=i;j++)
      // cout<<j;
      cout<<endl;
    }

}

void solve2()
{
  char *ptr="hihihi";
  cout<<ptr+4;

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
    // solve();
    // solve1();
    solve2();
  }
  return 0;

}
