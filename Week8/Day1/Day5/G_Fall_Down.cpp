// problem link : https://codeforces.com/problemset/problem/1669/G
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int n, m;
char a[55][55];

void dfs(int i, int j)
{   
    if(i+1 < n && a[i+1][j] == '.')
    {
        a[i][j] = '.';
        a[i+1][j] = '*';
        dfs(i+1, j);
    }
    else return;
}

void solve()
{
    cin >> n >> m;

    // memset
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) a[i][j] = 0;
    }

    // array input
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }

    // operation
    for(int i = n-2; i >= 0; i--)
    {
        for(int j = m-1; j >= 0; j--)
        {
            if(a[i][j] == '*') dfs(i, j);
        }
    }

    // array output
    for(int i = 0;i < n; i++)   
    {
        for(int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << nl;
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