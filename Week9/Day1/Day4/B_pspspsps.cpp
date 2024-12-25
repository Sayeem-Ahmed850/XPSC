// problem link : https://codeforces.com/problemset/problem/2049/B
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
    int n; cin >> n;
    string s; cin >> s;

    if(s[0] == 's') s[0] = '.';
    if(s[n-1] == 'p') s[n-1] = '.';

    bool s_flag = false, p_flag = false;
    for(char c : s)
    {
        if(c == 's') s_flag = true;
        if(c == 'p') p_flag = true;
    }
    
    if(s_flag && p_flag) no;
    else yes;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}