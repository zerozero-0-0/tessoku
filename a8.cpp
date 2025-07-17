#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<int>> x(h, vector<int> (w));
    rep(i, h) rep(j, w) cin >> x[i][j];

    rep(i, h - 1) rep(j, w) x[i + 1][j] += x[i][j];

    rep(i, h) rep(j, w - 1) x[i][j + 1] += x[i][j];

    int q;
    cin >> q;

    while (q--) 
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a--;
        b--;
        c--;
        d--;

        int ans;
        if (a == 0 && b == 0) ans = x[c][d];
        else if (a == 0) ans = x[c][d] - x[c][b - 1];
        else if (b == 0) ans = x[c][d] - x[a - 1][d];
        else ans = x[c][d] - x[a - 1][d] - x[c][b - 1] + x[a - 1][b - 1];

        cout << ans << endl;
    }
}
