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
    ll n; cin >> n;
    vector<int> ans;
    for(int i = 0; i <= __lg(n); i++)
    {
        if((n >> i) & 1){
            long long x = n - (1LL << i);
            if(x > 0){
                ans.push_back(x);
            }
        }
    }
    reverse(ans.begin(), ans.end());
    
    ans.push_back(n);
    cout << ans.size() << nl;
    for(auto val : ans) cout << val << " ";
    cout << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}