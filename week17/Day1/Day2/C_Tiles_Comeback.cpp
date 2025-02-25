// problem link : https://codeforces.com/problemset/problem/1851/C
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
    for(auto &val : a) cin >> val;

    int cnt = 0, x = -1;
    for(int i = 0; i < n; i++)
    {
        if(a[0] == a[i]) cnt++;
        if(cnt >= k && a[0] == a[n-1]) {yes; return;} 
        if(cnt >= k) {x = i; break;}
    }

    if(cnt >= k)
    {
        cnt = 0;
        for(int i = x; i < n; i++)
        {
            if(a[n-1] == a[i]) cnt++;
            if(cnt >= k) {yes; return;}
        }
    }
    no;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}