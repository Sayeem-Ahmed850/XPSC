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
    int n, k, B = 30;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(B+1);
    for(int i = 0; i < n; i++)
    {
        for(int j = B; j >= 0; j--)
        {
            if((a[i] >> j) & 1) b[j]++;
        }
    }

    int ans = 0;
    for(int i = B; i >= 0; i--)
    {
        if(b[i] == n){
            ans += (1LL << i);
        }
        else{
            int need = n - b[i];;
            if(k >= need){
                ans += (1LL << i);
                k -= need;
            }
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