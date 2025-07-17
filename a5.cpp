#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int n, k;
    cin >> n >> k;

    ll ans = 0;
    for (ll a = 1; a <= n; a++)
    {
        for (ll b = 1; b <= n; b++)
        {
            ll c = k - (a + b);
            if (c < 1 || c > n) continue;
            ans++;
        }
    }

    cout << ans << endl;
}
