#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;

    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    map<ll, int> mp;
    mp[0] = 1;
    ll sum = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];    
        auto it = mp.find(((sum%n)+n)%n);
        if(it != mp.end())
        {
            ans += mp[((sum%n)+n)%n];
        }
        mp[((sum%n)+n)%n]++;
    }
    cout << ans << nl;
    return 0;
}