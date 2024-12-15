// problem link : https://codeforces.com/problemset/problem/1975/A
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
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> x, y;
    bool flag = true;
    for(int i = 0; i < n; i++)
    {
        if(flag) x.push_back(a[i]);
        else y.push_back(a[i]);

        if(a[i] > a[i + 1]) flag = false;
    }

    vector<int> ans;
    for(auto val : y) ans.push_back(val);
    for(auto val : x) ans.push_back(val);

    flag = true;
    for(int i = 0; i < n-1; i++)
    {
        if(ans[i] > ans[i+1]) flag = false;
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