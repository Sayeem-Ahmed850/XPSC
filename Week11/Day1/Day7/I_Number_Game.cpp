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
    int n; cin >> n;
    vector<int> a(n);
    for(auto &val : a) cin >> val;
    int ans = 0;
    for(int k = 1; k <= n; k++)
    {
        multiset<int> ml(a.begin(), a.end());
        for(int i = 0; i < n; i++)
        {   
            auto it = upper_bound(ml.begin(), ml.end(), k-i);
            if(it == ml.begin()) break;
            ml.erase(--it);
            if(!ml.empty())
            {
                int x = *ml.begin();
                ml.erase(ml.begin());
                ml.insert(x+k-i);
            }
        }
        if(ml.size()+k == n) ans = k;
    }
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}