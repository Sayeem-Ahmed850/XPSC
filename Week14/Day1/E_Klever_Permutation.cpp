// problem link : https://codeforces.com/problemset/problem/1927/E
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
    int n, k;
    cin >> n >> k;

    vector<int> ans(n, 0);
    int val1 = 1, val2 = n;
    for(int i = 0; i < n; i++)
    {
        if(ans[i] != 0) break;
        if(i%2 == 0)
        {
            for(int j = i; j < n; j += k) ans[j] = val1, val1++;
        }
        else
        {
            for(int j = i; j < n; j += k) ans[j] = val2, val2--;
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