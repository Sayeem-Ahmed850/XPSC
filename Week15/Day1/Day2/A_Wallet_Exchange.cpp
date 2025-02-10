// problem link : https://codeforces.com/problemset/problem/1919/A
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if(a % 2 == 0 && b % 2 == 0) cout << "Bob" << nl;
    else if(a % 2 != 0 && b % 2 != 0) cout << "Bob" << nl;
    else cout << "Alice" << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}