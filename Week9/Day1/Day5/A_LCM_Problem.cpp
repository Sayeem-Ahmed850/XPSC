// problem link : https://codeforces.com/problemset/problem/1389/A
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
    int l, r;
    cin >> l >> r;
    
    if(l * 2 > r) cout << -1 << " " << -1 << nl;
    else cout << l << " " << l*2 << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}