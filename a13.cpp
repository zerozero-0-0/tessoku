#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    ll ans = 0;
    int r = 0;
    rep(l, n)
    {
        while (a[r + 1] - a[l] <= k && r + 1 < n) {
            r++;
        }

        ans += (ll)r - l;
    }

    cout << ans << endl;
}
