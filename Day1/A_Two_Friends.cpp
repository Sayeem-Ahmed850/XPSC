// problem link : https://codeforces.com/problemset/problem/1969/A
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
    vector<int> p(n+1);
    for(int i = 1; i <= n; i++) cin >> p[i];
    
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(p[p[i]] == i) cnt++;
    }

    if(cnt >= 2) 
        cout << 2 << nl;
    else
        cout << 3 << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}