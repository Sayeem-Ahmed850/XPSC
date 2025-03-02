// problem link : https://codeforces.com/problemset/problem/2014/B
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

    int ans;
    if(n%2 == 0) ans = k/2; 
    else ans = ceil(double(k)/2);

    if(ans % 2 == 0) yes;
    else no;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}