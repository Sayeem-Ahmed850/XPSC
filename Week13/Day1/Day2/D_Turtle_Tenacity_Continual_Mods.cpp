// problem link : https://codeforces.com/problemset/problem/1933/D
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

    int gcd = 0;
    for(int i = 0; i < n; i++)
    {
        gcd =__gcd(gcd, a[i]);
    }       
    
    int gcd_cnt = count(a.begin(), a.end(), gcd);
    if(gcd_cnt > 1) no;
    else yes;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}