// problem link : https://cses.fi/problemset/task/1073
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;

    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i]; 

    vector<ll> ml;
    ml.push_back(a[0]);
    for(int i = 1; i < n; i++) // Time Complixity : O(n * log n)
    {
        auto it = upper_bound(ml.begin(), ml.end(), a[i]);
        if(it == ml.end()){
            ml.push_back(a[i]);
        }
        else{   
            *it = a[i];
        }
    }
    cout << ml.size() << nl;
    return 0;
}