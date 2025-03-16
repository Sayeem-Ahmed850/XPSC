// problem link : https://codeforces.com/problemset/problem/1843/E
#include <bits/stdc++.h>
#define pi pair<int, int>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int mxN = 1e5+9;
int a[mxN], t[4*mxN];

void build(int n, int b, int e)
{
    if(b == e)
    {
        t[n] = a[b];
        return;
    }
    int mid = (b+e)/2, l = 2*n, r = (2*n)+1;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n] = t[l]+t[r];
}

void update(int n, int b, int e, int i, int v)
{
    if(i < b || i > e) return;
    if(b == e)
    {
        t[n] = v;
        return;
    }
    int mid = (b+e)/2, l = 2*n, r = (2*n)+1;
    update(l, b, mid, i, v);
    update(r, mid+1, e, i, v);
    t[n] = t[l]+t[r];
}

int query(int n, int b, int e, int i, int j)
{
    if(e < i || j < b) return 0;
    if(b >= i && e <= j) return t[n];
    int mid = (b+e)/2, l = 2*n, r = (2*n)+1;
    return query(l, b, mid, i, j) + query(r, mid+1, e, i, j);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pi> a(m);
    for(int i = 0; i < m; i++) cin >> a[i].first >> a[i].second;
    int q; cin >> q;
    vector<int> v(q);
    for(int i = 0; i < q; i++) cin >> v[i];

    auto ok = [&](int mid)
    {
        build(1, 1, n);
        for(int i = 0; i <= mid; i++) update(1, 1, n, v[i] ,1);

        for(int i = 0; i < m; i++)
        {
            int L = a[i].first, R = a[i].second;
            int len = (R-L)+1;
            int one = query(1, 1, n, L, R);
            int zero = len-one;
            if(one > zero) return true;
        }
        return false;
    };

    int l = 0, r = q-1, mid, ans = -1;
    while(l <= r)
    {
        mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    if(ans != -1) ans++;
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}