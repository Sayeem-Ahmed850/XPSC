// problem link : https://codeforces.com/problemset/problem/1891/A
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

    if(n < 4) {yes; return;}
    a[0] = 0, a[1] = 0;

    if(!is_sorted(a.begin(), a.begin()+4)) {no; return;}

    int l = 4, r = 7, x = 4;    
    while(r < n)
    {
        for(int i = l; i < r; i++) if(a[i] > a[i+1]) {no; return;}
        x = r+1, l += l, r += x;
    }   
    for(int i = x; i < n-1; i++) if(a[i] > a[i+1]){no; return;}
    yes;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}