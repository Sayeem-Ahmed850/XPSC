// problem link : https://codeforces.com/problemset/problem/1433/D
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
    vector<int> a(n);
    for(auto &val : a) cin >> val;

    bool flag = false;
    for(int i = 1; i < n; i++)
    {
        if(a[0] != a[i]) {flag = true; break;};
    }

    if(flag)
    {
        yes;
        int x;
        for(int i = 1; i < n; i++)
        {
            if(a[i] != a[0])
            {
                cout << 1 << " " << i+1 << nl;
                x = i+1;
            }
        }
        for(int i = 1; i < n; i++)
        {
            if(a[0] == a[i]) cout << x << " " << i+1<< nl;
        }
    }
    else no;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}