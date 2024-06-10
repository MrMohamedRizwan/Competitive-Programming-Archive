#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int solve(vector<int>&arr)
{
    int n=arr.size();
    int ctr=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i)
        ctr++;
    }
    return ctr/2;
    
}
int main()
{
    int n;
    // cin>>n;
    // vector<int>arr(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // {0,2,1,3}
    // {0,2,1,3,4,6,5,7};
    // {0,3,2,1,4,5}
    // {3,2,0,1}
    vector<int>arr={0,2,1,3,4,6,5,7};
    cout<<solve(arr);
    return 0;


}