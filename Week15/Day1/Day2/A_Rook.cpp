// problem link : https://codeforces.com/problemset/problem/1907/A
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    string s; cin >> s;

    int num = s[1]-'0';
    for(int i = 1; i <= 8; i++)
    {
        if(i != num) cout << s[0] << i << nl;
    }
    for(char c = 'a'; c <= 'h'; c++)
    {
        if(c != s[0]) cout << c << s[1] << nl;
    }
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}