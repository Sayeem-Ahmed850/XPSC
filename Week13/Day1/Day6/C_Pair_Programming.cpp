// problem link : https://codeforces.com/problemset/problem/1547/C
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n), b(m);
    for(auto &val : a) cin >> val;
    for(auto &val : b) cin >> val;

    vector<int> ans;
    bool flag = true;
    int l = 0, r = 0;
    while (l < n || r < m)
    {
        if(l < n && r < m)
        {
            if(a[l] < b[r])
            {
                if(a[l] == 0) k++;
                if(a[l] <= k)
                {
                    ans.push_back(a[l]); l++;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if(b[r] == 0) k++;
                if(b[r] <= k)
                {
                    ans.push_back(b[r]); r++;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        else if(l < n && r >= m)
        {
            if(a[l] == 0) k++;
            if(a[l] <= k)
            {
                ans.push_back(a[l]); l++;
            }
            else
            {
                flag = false;
                break;
            }
        }
        else if(l >= n && r < m)
        {
            if(b[r] == 0) k++;
            if(b[r] <= k)
            {
                ans.push_back(b[r]); r++;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    if(flag)
    {
        for(auto val : ans) cout << val << " ";
        cout << nl;
    }
    else cout << -1 << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}