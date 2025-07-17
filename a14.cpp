#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n), c(n), d(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];
    rep(i, n) cin >> d[i];

    set<int> ab, cd;
    rep(i, n)
    {
        rep(j, n) {
            ab.insert(a[i] + b[j]); 
            cd.insert(c[i] + d[j]);
        }
    }

    for (int i : ab)
    {
        if (cd.count(k - i))
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}
