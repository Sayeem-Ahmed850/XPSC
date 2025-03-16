// problem link : https://codeforces.com/problemset/problem/339/D
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int mxN = (1 << 17)+9;
int a[mxN], t[4*mxN];
 
int merge(int l, int r, int n)
{   
    if(__lg(n)%2 == 0) return (l^r);
    else return (l|r);
}

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
    t[n] = merge(t[l], t[r], e-b+1);
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
    t[n] = merge(t[l], t[r], e-b+1);
}

int main()
{
    FIO;
    int n, q;     
    cin >> n >> q;
    n = (1 << n);
    for(int i = 1; i <= n; i++) cin >> a[i];

    build(1, 1, n);
    while(q--)
    {
        int i, v;
        cin >> i >> v;
        update(1, 1, n, i, v);
        cout << t[1] << nl;
    }
    return 0;   
}