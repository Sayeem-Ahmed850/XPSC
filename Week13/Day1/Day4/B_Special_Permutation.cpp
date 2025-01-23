// problem link : https://codeforces.com/problemset/problem/1612/B
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    
    vector<int> ans(n);
    ans[0] = a; ans[n-1] = b;
    int val = n;
    for(int i = 1; i < n-1; i++)
    {
        if(val == a || val == b) val--;
        if(val == a || val == b) val--;
        ans[i] = val;
        val--;
    }

    bool flag = true;
    for(int i = 0; i < n/2; i++)
    {
        if(ans[i] < a)    
        {
            cout << -1 << nl; return;
        }
    }

    for(int i = n/2; i < n; i++)
    {
        if(ans[i] > b) 
        {
            cout << -1 << nl; return;
        }
    }

    for(auto val : ans) cout << val << " ";
    cout << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}