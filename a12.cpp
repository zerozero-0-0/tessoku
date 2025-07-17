#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    int l = -1, r = 1e9;
    while (r - l > 1) 
    {
        ll m = (l + r) / 2;
        ll cnt = 0;
        rep(i, n)
        {
            int tmp = m / a[i];
            cnt += tmp;
        }

        if (cnt < k) l = m;
        else r = m;
    }

    cout << r << endl;
}
