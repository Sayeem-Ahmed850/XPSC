// problem link : https://codeforces.com/problemset/problem/1668/B
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
    int n, m;
    cin >> n >> m;      
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i]; 
    sort(a.begin(), a.end());

    ll flag = 0;
    for(int i = 1; i < n; i++)
    {
        flag += a[i]+1;
    }
    flag += a.back();

    if(flag < m) yes; 
    else no;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}