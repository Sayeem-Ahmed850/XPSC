// problem link : https://codeforces.com/problemset/problem/1925/A
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s, ans;
    for(int i = 0; i < k; i++) s.push_back(char(i+'a'));
    for(int i = 0; i < n; i++) ans += s;
    cout << ans << nl;
}

int main()
{
    FIO;    
    int t; cin >> t;
    while(t--) solve();
    return 0;
}