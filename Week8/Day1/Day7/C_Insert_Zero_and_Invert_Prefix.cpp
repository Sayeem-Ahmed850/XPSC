// problem link : https://codeforces.com/problemset/problem/1839/C
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
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    if(a[n] == 1){
        no;
        return;
    }   
    yes;
    a[0] = a[1];
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == a[i-1])
        {
            cout << 0 << " ";
        }
    }
    for(int i = 1;i <= n; i++)
    {
        if(a[i] != a[i-1])
        {
            cout << i-1 << " ";
        }
    }
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