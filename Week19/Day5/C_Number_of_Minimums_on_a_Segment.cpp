// problem link : https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int mxN = 1e5+9, inf = 1e9+9;
vector<int> a(mxN);

struct node
{
    int mn, cnt;
};
vector<node> t(4*mxN);

node merge(node l, node r)
{
    node ans;
    ans.mn = min(l.mn, r.mn);
    ans.cnt = 0;
    if(l.mn == ans.mn) ans.cnt += l.cnt;
    if(r.mn == ans.mn) ans.cnt += r.cnt;
    return ans;
};

void build(int n, int b, int e)
{
    if(b == e)
    {
        t[n].mn = a[b];
        t[n].cnt = 1;
        return; 
    }
    int mid = (b+e)/2, l = 2*n, r = (2*n)+1;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n] = merge(t[l], t[r]);
}

void update(int n, int b, int e, int i, int v)
{
    if(i < b || i > e) return;
    if(b == e)
    {
        t[n].mn = v;
        t[n].cnt = 1; 
        return;
    }
    int mid = (b+e)/2, l = 2*n, r = (2*n)+1;
    update(l, b, mid, i, v);
    update(r, mid+1, e, i, v);
    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j)
{
    if(e < i || j < b) return {inf, 1};
    if(b >= i && e <= j) return t[n];
    int mid = (b+e)/2, l = 2*n, r = (2*n)+1;
    node x = query(l, b, mid, i, j);
    node y = query(r, mid+1, e, i, j);
    return merge(x, y);
}

int main()
{
    FIO;
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];

    build(1, 1, n);

    while(m--)
    {
        int t; cin >> t;
        if(t == 1)
        {
            int i, v;
            cin >> i >> v;
            update(1, 1, n, i+1, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            node ans = query(1, 1, n, l+1, r);
            cout << ans.mn << " " << ans.cnt << nl;
        }
    }
    return 0;
}