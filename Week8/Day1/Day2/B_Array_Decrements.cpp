// problem link : https://codeforces.com/problemset/problem/1690/B
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
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int mx_diff = 0;
    for(int i = 0; i < n; i++)
    {
        if(b[i] > a[i])
        {
            no;
            return;
        }
        else 
            mx_diff = max(mx_diff, a[i] - b[i]);
    }

    for(int i = 0; i < n; i++)
    {
        a[i] = a[i] - mx_diff;
        if(a[i] < 0) a[i] = 0;
    }

    bool flag = true;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            flag = false;
            break;
        }
    }
    if(flag) yes;
    else no;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}