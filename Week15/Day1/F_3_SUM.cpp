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
	vector<int> cnt(10, 0);
	for (int i = 0; i < n; i++) 
    {
		int x; cin >> x;
		cnt[x%10]++;
	}

	vector<int> a;
	for (int i = 0; i < 10; i++) 
    {
		for (int j = 0; j < min(cnt[i], 3); j++) a.push_back(i);	
	}

	n = a.size();
	for (int i = 0; i < n; i++) 
    {
		for (int j = i + 1; j < n; j++) 
        {
			for (int k = j + 1; k < n; k++) 
            {
				if ((a[i] + a[j] + a[k]) % 10 == 3) 
                {
                    yes;
                    return;
                }
			}
		}
    }
    no;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}