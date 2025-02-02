// problem link : https://cses.fi/problemset/task/1076
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &val : a) cin >> val;

    pbds<pi> p;
    int l = 0, r = 0;
    while(r < n)
    {
        p.insert({a[r], r});
        int rng = r-l+1;
        if(rng == k)
        {
            int pos = rng/2;
            if(k%2 == 0) pos--;

            auto it = p.find_by_order(pos);
            cout << it->first << " ";

            p.erase({a[l], l});
            l++;
        }
        r++;
    }

    return 0;
}