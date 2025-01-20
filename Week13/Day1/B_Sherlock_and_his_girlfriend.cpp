// problem link : https://codeforces.com/problemset/problem/776/B
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n; cin >> n;
    vector<bool> prime(n+2, true);
    vector<int> ans(n+2, 1);

    if(n < 3) cout << 1 << nl;
    else cout << 2 << nl;

    for(int i = 2; i*i <= n+1; i++)
    {
        if(prime[i])
        {
            for(int j = i+i; j <= n+1; j += i)
            {
                ans[j] = 2;
                prime[j] = false;
            }
        }
    }
    for(int i = 2; i <= n+1; i++) cout << ans[i] << " ";
    
    return 0;
}