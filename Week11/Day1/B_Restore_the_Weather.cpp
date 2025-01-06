// problem link : https://codeforces.com/problemset/problem/1833/B
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

class cmp{
public:
    bool operator()(pi a, pi b){
        return a.second < b.second;
    }
};

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<pi> a(n), b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first; a[i].second = i;
    }
    sort(a.begin(), a.end());   

    for(int i = 0; i < n; i++) cin >> b[i].first;
    sort(b.begin(), b.end());  

    for(int i = 0; i < n; i++) b[i].second = a[i].second;
    sort(b.begin(), b.end(), cmp());

    for(auto val : b) cout << val.first << " ";
    cout << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}