// problem link : https://codeforces.com/problemset/problem/1654/C
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
    multiset<int> ml;
    ll sum = 0;
    for(auto &val : a)
    {
        cin >> val;
        ml.insert(val);
        sum += val;
    }

    priority_queue<ll> pq;
    pq.push(sum);
    while(!ml.empty())
    {
        if(pq.top() < *--ml.end()) break;
        if(pq.top() == *--ml.end())
        {
            pq.pop();
            ml.erase(--ml.end());
        }
        else
        {
            if(pq.top()%2 == 0)
            {
                pq.push(pq.top()/2);
                pq.push(pq.top()/2);
            }
            else
            {
                pq.push((pq.top()/2)+1);
                pq.push(pq.top()/2);
            }
            pq.pop();
        }
    }
    if(ml.empty()) yes;
    else no;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}