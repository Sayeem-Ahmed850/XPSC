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
    int B = (1 << __lg(n));
    int A = B ^ n;
    cout << A << " " << B << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}