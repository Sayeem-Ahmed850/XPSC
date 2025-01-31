// problem link : https://codeforces.com/problemset/problem/1054/B
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
    vector<int> a(n);
    for(auto &val : a) cin >> val;

    if(a[0] != 0) cout << 1;
    else
    {
        set<int> st;
        st.insert(0);
        for(int i = 1; i < n; i++)
        {
            int x = *--st.end(), y = st.size();
            st.insert(a[i]);
            if(st.size() != y)
            {
                int tmp = *--st.end(); tmp--;
                if(x != tmp) 
                {
                    cout << i+1;
                    return 0;
                }
            }
        }
        cout << -1 << nl;
    }

    return 0;
}