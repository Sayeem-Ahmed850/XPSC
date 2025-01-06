// problem link : https://codeforces.com/problemset/problem/1856/B
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
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }   

    ll one = 0, other = 0, other_sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 1) one += a[i]+1;
        else
        {
            other++;
            other_sum += a[i];
        }
    }
    if(n == 1 || one > sum) no;
    else if(one == 0) yes;
    else
    {
        ll diff = sum - one;
        if(diff >= other && (diff < other_sum || diff > other_sum)) yes;
        else no;
    }
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}