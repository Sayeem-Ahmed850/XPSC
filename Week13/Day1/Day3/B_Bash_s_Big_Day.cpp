// problem link : https://codeforces.com/problemset/problem/757/B
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int mxN = 1e5+5;
vector<bool> allPrime(mxN+1, false);
void Prime()
{
    vector<bool> prime(mxN+1, true);
    for(int i = 2; i*i <= mxN; i++)
    {
        if(prime[i])
            for(int j = i+i; j <= mxN; j += i) prime[j] = false;
    }
    for(int i = 2; i <= mxN; i++)
    {
        if(prime[i]) allPrime[i] = true;
    }
}

vector<int> d(mxN);
void Divisor(int n)
{
    for(int i = 1; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            d[i]++;
            if(n/i != i) d[n/i]++;
        }
    }
}

int main()
{
    FIO;
    Prime();
    int n; cin >> n;
    vector<int> a(n);
    for(auto &val : a) cin >> val;

    for(auto val : a) Divisor(val);

    int ans = 1;
    for(int i = 2; i <= mxN; i++)
    {
        if(d[i] != 0 && allPrime[i]) ans = max(ans, d[i]);
    }
    cout << ans << nl;
    return 0;
}