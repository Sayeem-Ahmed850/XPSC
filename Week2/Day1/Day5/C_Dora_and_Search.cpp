#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    set<int> st;
    for(int i =0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
    }

    int l = 0, r = --n;
    while(l < r)
    {
        if(a[l] != *st.begin() && a[l] != *st.rbegin() && a[r] != *st.begin() && a[r] != *st.rbegin())
        {
            cout << ++l << " " << ++r << '\n';
            return;
        }
        if(a[l] == *st.begin())
        {
            st.erase(st.begin());
            l++;
        }
        else if(a[l] == *st.rbegin())
        {
            st.erase(--st.end());
            l++;
        }

        if(a[r] == *st.begin())
        {
            st.erase(st.begin());
            r--;
        }
        else if(a[r] == *st.rbegin())
        {
            st.erase(--st.end());
            r--;
        }

        // if(a[l] == *st.begin() || a[l] == *st.rbegin())
        // {
        //     if()
        // }
        // if(a[r] == *st.begin() || a[r] == *st.rbegin())
        // {
        //     st.erase(a[r]);
        //     r--;
        // }
    }
    cout << -1 << '\n';
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}