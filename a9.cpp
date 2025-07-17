#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> grid(h, vector<int> (w));

    rep(_, n)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a--;
        b--;
        c--;
        d--;

        grid[a][b]++;
        if (c < h - 1) grid[c + 1][b]--;
        if (d < w - 1) grid[a][d + 1]--;
        if (c < h - 1 && d < w - 1) grid[c + 1][d + 1]++;
    }

    rep(i, h - 1) rep(j, w) grid[i + 1][j] += grid[i][j];
    rep(i, h) rep(j, w - 1) grid[i][j + 1] += grid[i][j];

    rep(i, h) 
    {
        rep(j, w) cout << grid[i][j] << " ";
        cout << endl;
    }
}
