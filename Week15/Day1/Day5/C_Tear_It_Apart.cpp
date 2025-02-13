// problem link : https://codeforces.com/problemset/problem/1821/C  
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    string s; cin >> s;
    
    int ans = INT_MAX, n = s.size();
    for(char c = 'a'; c <= 'z'; c++)
    {
        int cnt = 0, x = 0;
        for(int j = 0; j < n; j++)
        {
            if(s[j] != c)
            {
                cnt++; x = max(x, cnt);
            }
            else cnt = 0;
        }
        cnt = 0;
        while(x > 0)
        {
            x /= 2; cnt++;
        }
        ans = min(ans, cnt);
    }
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}