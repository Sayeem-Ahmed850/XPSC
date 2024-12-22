// problem link : https://codeforces.com/problemset/problem/762/A
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;

    ll n, k;
    cin >> n >> k;

    vector<ll> ans;
    for(ll i = 1; i * i <= n ; i++)
    {
        if(n % i == 0)
        {
            ans.push_back(i);
            if(n/i != i) ans.push_back(n/i);
        }
    }
    sort(ans.begin(), ans.end());
    if(ans.size() < k) cout << -1; 
    else cout << ans[k-1] << " ";
    return 0;
}