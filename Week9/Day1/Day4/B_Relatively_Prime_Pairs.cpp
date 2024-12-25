// problem link : https://codeforces.com/problemset/problem/1051/B
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;

    ll l, r;
    cin >> l >> r;
    yes;
    for(ll i = l; i <= r; i+=2)
    {
        cout << i << " " << i+1 << nl;
    }
    return 0;
}