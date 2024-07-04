#include<bits/stdc++.h>
using namespace std;
bool call(vector<vector<int>>&arr,int r,int c,int i,int j,int dr,int dc, vector<vector<bool>>& visited)
{
    if(i<0||i>=r||j<0||j>=c)
    {
        //  cout<<"Out of index\n";
        return false;
    }
    if(arr[i][j]!=1||visited[i][j])
    {return false;}
    if(i==dr && j==dc)
    {
        return true;
    }
    visited[i][j]=true;
    bool b1=call(arr,r,c,i+1,j,dr,dc,visited);
    bool b2=call(arr,r,c,i,j+1,dr,dc,visited);
    bool b3=call(arr,r,c,i-1,j,dr,dc,visited);
    bool b4=call(arr,r,c,i,j-1,dr,dc,visited);
    visited[i][j]=false;
    return b1||b2||b3||b4;

}
int main()
{
    vector<vector<int>>arr={{1,1,1,0,1},
                            {1,0,1,1,1},
                            {1,1,1,1,0},
                            {1,1,1,1,1}};
    vector<vector<bool>> visited(arr.size(), vector<bool>(arr[0].size(), false));
    bool val=call(arr,arr.size(),arr[0].size(),0,0,0,4,visited);
    cout<<val;
}