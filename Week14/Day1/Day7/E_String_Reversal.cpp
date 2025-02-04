// problem link : https://codeforces.com/problemset/problem/1430/E
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    FIO;
    int n; cin >> n;
    string s; cin >> s;
    string r = s;
    reverse(r.begin(), r.end());

    map<char, vector<int>> mp1, mp2;
    for(int i = 0; i < n; i++)
    {
        mp1[s[i]].push_back(i);
        mp2[r[i]].push_back(i);
    }

    vector<int> per(n);
    for(char c = 'a'; c <= 'z'; c++)
    {
        for(int i = 0; i < mp1[c].size(); i++)
        {
            per[mp2[c][i]] = mp1[c][i];
        }
    }

    pbds<int> p;
    ll ans = 0;
    for(int i = n-1; i >= 0; i--)
    {
        ans += p.order_of_key(per[i]);
        p.insert(per[i]);
    }
    cout << ans << nl;
    return 0;
}