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

    int Xor = a[0];
    for(int i = 1; i < n; i++){
        Xor ^= a[i];
    }  

    vector<int> v; 
    for(int i = 0; i < n; i++){
        int x = a[i] ^ Xor;
        v.push_back(x);
    }

    int ans =  v[0];
    for(int i = 1; i < n; i++){
        ans = ans ^ v[i];
    }
    
    if(ans == 0) 
        cout << Xor << nl;
    else    
        cout << -1 << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}