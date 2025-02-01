// problem link : https://codeforces.com/problemset/problem/845/C
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

    map<int, int> mp;
    while(n--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }

    ll sum = 0;
    for(auto[x, y]:mp)
    {
        sum += y;
        if(sum > 2) 
        {
            no;
            return 0;
        }
    }
    yes;
    return 0;
}