#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void PrimeFactor(int n)
{
    vector<int> factors;
      while (n % 2 == 0) {
        factors.push_back(2);
        n = n / 2;
    }

    // Check for other odd factors
    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n = n / i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        factors.push_back(n);
    }
    for(int i=0;i<factors.size();i++)
    cout<<factors[i]<<" ";
    // return factors;

}
void solve()
{
    int n=250;
    PrimeFactor(n);


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
