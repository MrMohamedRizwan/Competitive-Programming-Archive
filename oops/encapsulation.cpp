#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class MainClass
{
  public:
  int name;
  int age;
public:
  MainClass(int age,int name)
    {
      this->name=name;
      this->age=age;
    }
    public:
    void getval()
    {
      cout<<age<<endl;
      cout<<name<<endl;
    }

};

void solve()
{
  // int n;
  // cin >> n;
  int age=10;
  int name=20;
  MainClass x(name,age);
  x.getval();
  cout<<x.age;

  // return 0;
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
