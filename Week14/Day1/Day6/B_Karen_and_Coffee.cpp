// problem link : https://codeforces.com/problemset/problem/816/B
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
const int mxN = 2e5+2;

int main()
{
    FIO;
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> a(mxN, 0);
    for(int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        a[l]++;
        a[r+1]--;
    }

    vector<int> p(mxN);
    p[0] = a[0];
    for(int i = 1; i < mxN; i++) p[i] = p[i-1]+a[i];
    
    vector<int> ans(mxN); int x = 0;
    for(int i = 0; i < mxN; i++)
    {
        if(p[i] >= k) x++;
        ans[i] = x;
    }

    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout << ans[r]-ans[l-1] << nl;  
    }
    
    return 0;
}   