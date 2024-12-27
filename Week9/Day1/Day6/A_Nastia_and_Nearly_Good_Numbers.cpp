// problem link : https://codeforces.com/problemset/problem/1742/D
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
    int a, b;
    cin >> a >> b;
    if(b == 1) no;
    else
    {
        yes;
        cout << a << " " << (1LL*a*b) << " " << (1LL*a*b)+a << nl;
    }
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}