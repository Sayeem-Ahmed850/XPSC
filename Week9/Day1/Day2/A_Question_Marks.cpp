// problem link : https://codeforces.com/problemset/problem/1993/A
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    map<char, int> mp;
    for(int c : s)
    {
        if(c != '?') mp[c]++;
    }

    int x = 0;
    for(int i = 0; i < 4; i++)
    {
        int y = mp[i+65];
        if(y < n) x += n - mp[i+65];
    }
    cout << s.size() - x << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}