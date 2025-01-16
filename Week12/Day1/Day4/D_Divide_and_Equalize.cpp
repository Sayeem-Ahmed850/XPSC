// problem link : https://codeforces.com/problemset/problem/1881/D
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
    for(int i = 0; i < n; i++) cin >> a[i];

    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 2; j*j <= a[i]; j++)
        {
            if(a[i]%j == 0)
            {
                while(a[i]%j == 0)
                {
                    mp[j]++;
                    a[i]/=j;
                }
            }
        }
        if(a[i]>1) mp[a[i]]++;
    }

    bool flag = true;
    for(auto[x, y] : mp)
    {
        if(y%n != 0)
        {
            flag = false;
            break;
        }
    }
    if(flag) yes;
    else no;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}