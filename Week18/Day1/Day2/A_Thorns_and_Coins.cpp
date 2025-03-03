// problem link : https://codeforces.com/problemset/problem/1932/A
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '@') ans++;
        if(i < n-1 && s[i] == '*' && s[i+1] == '*') break;
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