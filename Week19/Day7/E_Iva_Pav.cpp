// problem link : https://codeforces.com/problemset/problem/1878/E
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int N = 2e+5;
int a[N], t[4*N];

void build(int n, int b, int e)
{
    if(b == e) {t[n] = a[b]; return;}

    int mid = (b+e)/2, l = 2*n, r = (2*n)+1;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n] = (t[l] & t[r]);
}

int query(int n, int b, int e, int i, int j)
{
    if(e < i || j < b) return -1;
    if(b >= i && e <= j) return t[n];

    int mid = (b+e)/2, l = 2*n, r = (2*n)+1;
    int x = query(l, b, mid, i, j);
    int y = query(r, mid+1, e, i, j);


    if(x == -1) return y;
    else if(y == -1) return x;
    else return (x&y);
}

void solve()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];

    build(1, 1, n);

    auto ok = [&](int l, int k, int mid)    
    {
       int ans = query(1, 1, n, l, mid);
       if(ans >= k) return true;
       else return false;
    };
    
    int q; cin >> q;
    while(q--)
    {
        int l, k;
        cin >> l >> k;

        int i = l, j = n, mid, ans = -1;
        while(i <= j)
        {
            mid = i+(j-i)/2;
            if(ok(l, k, mid)) {ans = mid; i = mid+1;}
            else j = mid-1;
        }
        cout << ans << " ";  
    }
    cout << nl;  
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}