// problem link : https://lightoj.com/problem/curious-robin-hood
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int N = 1e5+5;
int a[N], t[4*N];

void build(int n, int b, int e)
{
    if(b == e){t[n] = a[b]; return;}

    int mid = (b+e)/2, l = 2*n, r = (2*n)+1;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n] = t[l]+t[r];
}

void update1(int n, int b, int e, int i)
{
    if(i < b || i > e) return;
    if(b == e)
    {
        cout << t[n] << nl;
        t[n] = 0;
        return;
    }
    int mid = (b+e)/2, l = 2*n, r = (2*n)+1;
    update1(l, b, mid, i);
    update1(r, mid+1, e, i);
    t[n] = t[l]+t[r];
}

void update2(int n, int b, int e, int i, int v)
{
    if(i < b || i > e) return;
    if(b == e){t[n] = t[n]+v; return;}

    int mid = (b+e)/2, l = 2*n, r = (2*n)+1;
    update2(l, b, mid, i, v);
    update2(r, mid+1, e, i, v);
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
    int n, q;
    cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> a[i];

    build(1, 1, n);

    while(q--)  
    {
        int t; cin >> t;
        if(t == 1)
        {
            int i; cin >> i;
            update1(1, 1, n, i+1);
        }   
        else if (t == 2)
        {
            int i, v;
            cin >> i >> v;
            update2(1, 1, n, i+1, v);
        }
        else 
        {
            int i, j;
            cin >> i >> j;
            cout << query(1, 1, n, i+1, j+1 ) << nl;
        }
    }
}

int main()
{
    FIO;
    int t; cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << nl;
        solve();
    }
    return 0;
}
