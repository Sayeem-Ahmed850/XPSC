#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> x;
    bool flag = false;
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] != 0) 
            flag = true;
        if(flag)
            x.push_back(a[i]);
    }

    ll ans = 0;    
    for(auto val : x)
    {
        if(val == 0){
            ans++;
        }
        else{
            ans += val;
        }
    }
    cout << ans << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}