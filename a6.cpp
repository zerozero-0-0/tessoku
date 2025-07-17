#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n - 1) a[i + 1] += a[i];

    while (q--) 
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0) cout << a[r] << endl;
        else cout << a[r] - a[l - 1] << endl;
    }
}
