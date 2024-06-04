#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sumOfDivisors(ll num)
{
    ll total=1;
    for(int i=2;(ll)i*i<=num;i++)
    {
        if(num%i==0)
        {
            int e=0;
            do{
                e++;
                num/=i;
            }while(num%i==0);
            ll sum=0,pow=1;
            do{
                sum+=pow;
                pow*=i;
            }while(e--);
            total*=sum;
        }
    }
    return total;

}

void solve()
{
    cout<<sumOfDivisors(10000000);

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
