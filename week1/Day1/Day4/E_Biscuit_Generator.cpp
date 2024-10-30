#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int a, b, t;
    cin >> a >> b >> t;

    int time = 0;
    int biscuit = 0;
    while(1)
    {
        time+=a;
        if(time > t)
        {
            break;
        }
        biscuit+=b;
    }
    cout << biscuit;
    return 0;
}