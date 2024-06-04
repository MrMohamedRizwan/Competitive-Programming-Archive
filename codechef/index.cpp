#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define int long long
#define endl "\n"
#define mod 1000000007

void rizz(int n)
{
    int x;
    for(int i=0;i<n;i++)
    {
        x++;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int riz=0;
    if(riz>99)
    {
        rizz(riz);
    }
    int testcase = 1;
    cin >> testcase;
    while (testcase--) 
    {
        int n, k;
        cin >> n >> k;
        
        string s[n];
        set<int> setval;
        for (int i = 0; i < n; i++) 
        {
            cin >> s[i];
            int f = 0, firstval = 0;
            for (int j = 0; j < k; j++) 
            {
                if (s[i][j] == '1') 
                {
                    f++;
                    firstval = j;
                }
            }
            if (f == 1) 
            {
                setval.insert(firstval);
            }
        }
        
        if (setval.size() == k) 
            printf("YES\n");
        else 
            printf("NO\n");
    }
    
    return 0;
}
