// Boundary Conditions:
// 2 <= N <= 200 1 <= PP <= 10 1 <= MAXPP <= 9999999
// Example Input/Output 1:
// Input:
// 4
// 2149
// Output: 107
// Explanation:
// The emperor defeats the countries in the following sequence based on the power points - 1, 4, 2, 9
// So when he defeats the country with power point 1, he gets 2*1*4 = 8 PPs. Now the remaining countries power points are 249.
// So when he defeats the country with power point 4, he gets 1*4*9 = 72 PPs. Now the remaining countries power points are 29.
// Now when he defeats the country with power point 2, he gets 1*2*9 = 18 PPs. (As there is no country to the left, we multiply it by 1). Now only the country with power point 9 is left.
// So when he defeats the last country with PP 9, he gets 1*9*1 = 9 PPs. (As there are no countries on the left or right we multiply by 1). So total PPs = 8+72+18+9 = 107).
// You can verify no other sequence gives power points more than 107.
// Example Input/Output 2:
// Input:
// 2


#include<bits/stdc++.h>
using namespace std;


vector<int>arr={2,1,4,9};
int maxx=0;
void call(int sum)
{
    if(arr.size()==0)
    {
        maxx=max(sum,maxx);
        return ;
    }
    for(int i=0;i<arr.size();i++)
    {
        int temp=arr[i];
        if(i>0)
        temp=temp*arr[i-1];
        if(i<arr.size()-1)
        temp=temp*arr[i+1];
        int tempind=arr[i];
        arr.erase(arr.begin()+i);
        call(sum+temp);
        arr.insert(arr.begin()+i,tempind);
    }
    
}

int main()
{
    call(0);
    cout<<maxx;
}