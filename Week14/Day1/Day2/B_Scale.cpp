// problem link : https://codeforces.com/problemset/problem/1996/B
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    char a[n][n];
    for(int i = 0; i < n; i++)  
    {   
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }

    for(int i = 0; i < n; i += k)
    {
        for(int j = 0; j < n; j += k)
        {
            cout << a[i][j];
        }
        cout <<  nl;
    }
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}