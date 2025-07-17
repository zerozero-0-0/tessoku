#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<int> l_max(n), r_max(n);
    l_max[0] = a[0];
    r_max.back() = a.back();
    for (int i = 1; i < n; i++) l_max[i] = max(a[i], l_max[i - 1]);

    for (int i = n - 2; i >= 0; i--) r_max[i] = max(a[i], r_max[i + 1]);

    int d;
    cin >> d;
    while (d--) 
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        cout << max(l_max[l - 1], r_max[r + 1]) << endl;
    }
}
