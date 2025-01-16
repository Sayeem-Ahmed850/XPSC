// problem link : https://codeforces.com/problemset/problem/230/B
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

bool isPrime(ll n)
{
    if(n == 1) return false;

    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

bool is_prefect_square(ll n)
{
    ll x = sqrtl(n);
    if(x * x == n) return true;
    else return false;
}
int main()
{
    FIO;
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        ll x; cin >> x;
        if(isPrime(sqrtl(x)) && is_prefect_square(x)) yes;
        else no;
    }
    return 0;
}