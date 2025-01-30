// problem link : https://codeforces.com/problemset/problem/1973/A
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
    int n = 3, sum = 0;
    vector<int> a(n);
    for(auto &val : a)  cin >> val, sum += val;
    sort(a.begin(), a.end());

    if(sum%2 != 0) cout << -1 << nl;
    else
    {   
        if(a[0] == 0 && a[1] == 0) cout << 0 << nl;
        else if(a[0]+a[1] > a[2]) cout << sum/2 << nl;
        else cout << a[0]+a[1] << nl;
    }
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}   