// problem link : https://codeforces.com/contest/1926/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int x = 1;
    while(1)
    {
        if(k <= (n+1)/2) 
        {
            cout << x*(2*k-1) << nl;
            return;
        }
        k = k - (n+1)/2;
        n /= 2, x *= 2;
    }
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}