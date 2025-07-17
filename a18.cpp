#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<vector<bool>> dp(n + 1, vector<bool> (s + 1, false));
    dp[0][0] = true;

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j <= s; j++)
        {
            if (dp[i - 1][j] && j + a[i - 1] <= s)
            {
                dp[i][j + a[i - 1]] = true;
            }
            if(dp[i - 1][j]) dp[i][j] = true;
        }
    }

    if (dp[n][s]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
