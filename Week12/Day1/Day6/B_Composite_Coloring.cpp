#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

vector<int> allPrime = {2,3, 5 ,7 ,11, 13, 17, 19, 23, 29, 31};

void solve()
{
    int n; cin >>n;
    vector<int> a(n);
    for(auto &val : a) cin >> val;

    map<int, vector<int>> mp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= 10; j++)
        {
            if(a[i] % allPrime[j] == 0)
            {
                mp[allPrime[j]].push_back(i);
                break;
            }
        }
    }

    vector<int> ans(n);
    int color = 1;
    for(auto[x, y]:mp)
    {
        for(auto val : y)
        {
            ans[val] = color;
        }
        color++;
    }

    cout << mp.size() << nl;
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