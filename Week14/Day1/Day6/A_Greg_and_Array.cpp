// problem link : https://codeforces.com/problemset/problem/295/A
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
const int mxN = 1e5+5;

vector<ll> a(mxN), b(mxN), c(mxN), l(mxN), r(mxN), d(mxN);

int main()
{
    FIO;
    int n, m, k;
    cin >> n >> m >> k;

    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++) cin >> l[i] >> r[i] >> d[i];

    while(k--)
    {
        int x, y;
        cin >> x >> y;
        b[x]++; b[y+1]--;
    }

    for(int i = 1; i <= m; i++)
    {
        b[i] += b[i-1];
        d[i] *= b[i];
    }

    for(int i = 1; i <= m; i++) 
    {
        c[l[i]] += d[i];
        c[r[i]+1] -= d[i];
    }
    for(int i = 1; i <= n; i++) c[i] = c[i-1]+c[i];
    for(int i = 1; i <= n; i++) cout << c[i]+a[i] << " ";
    return 0;
}