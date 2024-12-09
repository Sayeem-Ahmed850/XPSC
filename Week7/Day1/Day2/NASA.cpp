#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int mxN = (1LL << 15);
vector<int> allPL;

bool isPL(int x)
{
    string s = to_string(x);
    for(int i = 0; i < s.size() / 2; i++)
    {
        if(s[i] != s[s.size() - i - 1]) return false;
    }
    return true;
}

void markPL()
{
    for(int i = 0; i < mxN; i++)
    {
        if(isPL(i)) allPL.push_back(i);
    }
}

void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(mxN+1);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]]++;
    }

    long long int ans = n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < allPL.size(); j++)
        {
            int x = (a[i] ^ allPL[j]);
            ans += b[x];
        }
    }
    cout << (ans >> 1) << nl;
}

int main()
{
    FIO;

    markPL();
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}