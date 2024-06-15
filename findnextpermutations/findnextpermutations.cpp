#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void reccall(int index,vector<int>arr)
{
    if(index==arr.size())
    {
        cout<<"**********"<<endl;
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"%%%%%%%%%%%%"<<endl;
        return ;
    }
    for(int i=index;i<arr.size();i++)
    {
        cout<<endl<<index<<endl;
        swap(arr[i],arr[index]);
        for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
        cout<<endl;
        reccall(index+1,arr);
    }
}

void solve()
{
    vector<int>arr={1,2,3};
    reccall(0,arr);

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
