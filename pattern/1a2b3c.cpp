#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


void solve()
{
   string s="a25b2c3d4";
   string num="";
   char letter=' ';
   for(auto ch:s)
   {
        if(!(ch>='0' && ch<='9'))
        {
            if(num!="")
            {
                int n=stoi(num);
                for(int i=0;i<n;i++)
                {
                    cout<<letter;
                }
                letter=ch;
                num="";
            }
            letter=ch;
            num="";
        }
        else
        {
            num+=ch;
        }
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
