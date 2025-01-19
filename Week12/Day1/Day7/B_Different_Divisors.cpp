// problem link : https://codeforces.com/problemset/problem/1474/B
#include <bits/stdc++.h>
#define ll long long int    
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int mxN = 20015;
vector<int> allPrime;
void Prime()
{
    vector<int> prime(mxN+5, true);
    for(int i = 2; i*i <= mxN; i++)
    {
        if(prime[i])
            for(int j = i+i; j <= mxN; j += i) prime[j] = false;
    }
    for(int i = 2; i <= mxN; i++)
    {
        if(prime[i]) allPrime.push_back(i);
    }
}

void solve()
{
    int d; cin >> d;

    int mid1, mid2;
    for(int i = 0; i < allPrime.size(); i++)
    {
        if(allPrime[i]-1 >= d)
        {
            mid1 = i;
            break;
        }
    }

    for(int i = mid1+1; i < allPrime.size(); i++)
    {
        if(allPrime[i]-allPrime[mid1] >= d)
        {
            mid2 = i;
            break;
        }
    }
    cout << allPrime[mid1]*allPrime[mid2] << nl;
}

int main()
{
    FIO;
    Prime();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}