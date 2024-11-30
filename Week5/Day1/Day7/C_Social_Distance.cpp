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
    string s; cin >> s;

    int ans = 0, pre = 0;

    if(s[0] == '0'){
        ans++;
    }

    int i = 1;
    while(i < n)
    {
        if(s[i] == '0') 
        {
            if(i - pre > k){
                ans++;
                pre = i;
            }
        }
        else
        {
            if(i - pre <= k){
                ans--;
            }
            pre = i;
        }
        i++;
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