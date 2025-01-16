// problem link : https://codeforces.com/problemset/problem/1689/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

// Time Complexity O(n log n)

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    set<int> st;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
    }

    if(n == 1) 
    {
        cout << -1 << nl;
        return;
    }

    vector<int> ans;
    for(int i = 0; i < n-2; i++)
    {
        if(a[i] != *st.begin())
        {
            ans.push_back(*st.begin());
            st.erase(st.begin());
        }   
        else
        {
            ans.push_back(*++st.begin());
            st.erase(++st.begin());
        }
    }
    int x = *st.begin(), y = *++st.begin();

    if(x != a[n-2] && y != a[n-1])
    {
        ans.push_back(x);
        ans.push_back(y);
    }
    else
    {
        ans.push_back(y);
        ans.push_back(x);
    }
    for(auto val : ans) cout << val << " ";
    cout << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}