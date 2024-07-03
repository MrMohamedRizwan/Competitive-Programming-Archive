// A matrix of size R*C contains the coupon amount. A person if he picks a coupon amount in a column, he cannot pick the adjacent coupon amount in the previous or the next column. The program must print the maximum amount that can be picked by the person by choosing a maximum of one coupon amount in each column.
// Boundary Condition(s): 3 <= R, C <= 100 1 <= Coupon amount <= 10^5
// Input Format:
// The first line contains R and C separated by a space.
// The next R lines, each contains C integers separated by a space.
// Output Format:
// The first line contain an integer representing the maximum amount that can be picked by the person by choosing a maximum of one coupon amount in each column.
// Example Input/Output 1:
// Input:
// 45
// 10
// 5
// 2
// 8
// 20
// 20
// 6
// 4
// 80
// 1
// 8
// 4
// 10
// 30
// 3
// 15
// 2 5
// 3
// 30
// Output:
// 111

#include<bits/stdc++.h>
using namespace std;
void call(vector<vector<int>>&arr,int row,int col,int c,int minn,int maxx,int sum )
{
    if(c>=col)
   {    cout<<sum<<" ";
        return ;
   }
   for(int i=0;i<row;i++)
   {
        if(i<=minn||i>=maxx)
        call(arr,row,col,c+1,i-2,i+2,sum+arr[i][c]);
   }
}
int main()
{
    vector<vector<int>>arr={{10,5,2,8,20},{20,1,6,4,80},{30,3,8,4,10},{15,2,5,3,30}};
    int minn=arr[0].size()-1;
    int  maxx=0;
    int sum=0;
    call(arr,arr.size(),arr[0].size(),0,minn,maxx,sum);
}