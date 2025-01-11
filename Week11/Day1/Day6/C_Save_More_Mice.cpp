// problem link : https://codeforces.com/problemset/problem/1593/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    ll cat = 0, ans = 0;
    for(int i = 0; i < k; i++) 
    {
        int x; cin >> x;
        if(x >= n) ans++;
        else a.push_back(x);
    }
    sort(a.begin(), a.end());

    auto ok = [&](int mid)
    {
        ll sum = 0;
        for(int i = mid+1; i < a.size(); i++)
        {
            sum += n - a[i];
        }
        if(sum < a[mid]) return true;
        else return false;
    };

    int l = 0, r = a.size()-1, mid , tmp;
    while(l <= r)
    {
        mid = l+(r-l)/2;
        if(ok(mid))
        {
            tmp = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    int x = a.size()-tmp;
    cout << x+ans << nl;
    
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}