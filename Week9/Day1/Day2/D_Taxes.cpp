// problem link : https://codeforces.com/problemset/problem/735/D
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0) return false;
        if(n % (n/i) == 0) return false;
    }
    return true;
}

int main()
{
    FIO;
    int n; cin >> n;
    if(isPrime(n)) cout << 1;
    else if(n % 2 == 0) cout << 2;
    else
    {
        if(isPrime(n-2)) cout << 2;
        else cout << 3;
    }
    return 0;
}