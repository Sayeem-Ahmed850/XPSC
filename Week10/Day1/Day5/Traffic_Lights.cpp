// problem link : https://cses.fi/problemset/task/1163
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int x, n;
    cin >> x >> n;
    
    set<int> st = {0, x};
    multiset<int> ml = {x};   

    while(n--)
    {
        int p; cin >> p;
        auto it = st.upper_bound(p);
        int x = *it, y = *--it;

        ml.erase(ml.find(x-y));
        ml.insert(x-p);
        ml.insert(p-y);
        st.insert(p);
        cout << *ml.rbegin() << " ";
    }
    return 0;
}