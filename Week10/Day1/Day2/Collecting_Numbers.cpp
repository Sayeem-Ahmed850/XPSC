// problem link : https://cses.fi/problemset/task/2216
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

    vector<bool> frq(n, false);
    int round = 1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 1){
            frq[a[i]] = true;
            continue;
        }
        if(frq[a[i]-1] == false)
        {
            round++;
            frq[a[i]] = true;
        }
        else
        {
            frq[a[i]] = true;
        }
    }
    cout << round;
    return 0;
}