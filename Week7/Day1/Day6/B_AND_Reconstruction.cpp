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
    vector<int> b(n-1);
    for(int i = 0; i < n-1; i++) cin >> b[i];
    
    vector<int> a;
    a.push_back(b.front());
    for(int i = 0; i < n - 2; i++)
    {
        a.push_back((b[i] | b[i+1]));
    }
    a.push_back(b.back());
    
    bool flag = true;
    for(int i = 0; i < n-1; i++)
    {
        if((a[i] & a[i+1]) != b[i]){
            flag = false;
        }
    }

    if(flag)
    {
        for(auto val : a) cout << val << " ";
        cout << nl;
    }
    else
    {
        cout << -1 << nl;
    }
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}