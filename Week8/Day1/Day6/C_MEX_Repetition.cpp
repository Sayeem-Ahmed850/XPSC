// problem link : https://codeforces.com/problemset/problem/1863/C
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);   
    for(int i = 0; i < n; i++) cin >> a[i];

    int idx;
    if(k <= n) idx = k;
    else
    {
        idx = (k / (n+1)) * (n+1);
        idx = k - idx;
    }

    int frq[n+1] = {0};
    for(auto val : a) frq[val]++;

    for(int i = 0;  i <= n; i++)
    {
        if(frq[i] == 0) a.push_back(i);
    }

    vector<int> ans;    
    int x = n - idx;
    for(int i = x+1; i < a.size(); i++) ans.push_back(a[i]);
    for(int i = 0; i < x; i++) ans.push_back(a[i]);
    
    for(auto val : ans) cout << val << " ";
    cout << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}