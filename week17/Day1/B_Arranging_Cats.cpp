// problem link : https://codeforces.com/problemset/problem/1921/B
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    string s, f;
    cin >> s >> f;

    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '0' && f[i] == '1') cnt1++;
        else if(s[i] == '1' && f[i] == '0') cnt2++;
    }

    int ans = min(cnt1, cnt2);
    ans += abs(cnt1-cnt2);
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}