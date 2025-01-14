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
    string p, h;
    cin >> p >> h;  
    
    int n = p.size(), m = h.size();
    if(n > m)
    {
        no; return;
    }
    sort(p.begin(), p.end());

    for(int i = 0; i < abs(n-m)+1; i++)
    {
        string ans;
        for(int j = i; j < n+i; j++)
        {
            ans.push_back(h[j]);
        } 
        sort(ans.begin(), ans.end());
        
        if(ans == p) 
        {
            yes; return;
        }
    }
    no;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}