#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;

    string B = "BAN";
    string s;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++) s.push_back(B[j]);
    }   
    
    int op = 0;
    vector<int> ans;
    
    int l = 1, r = s.size() - 1;
    while(l < r)
    {
        op++;
        ans.push_back(l + 1);
        ans.push_back(r + 1);
        swap(s[l], s[r]);
        l += 3; r -= 3;
    }

    cout << op << nl;
    for(auto val : ans) cout << val << " ";
    cout << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}