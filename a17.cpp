#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n, 0), b(n, 0);
    
    for (int i = 1; i < n; i++) cin >> a[i];
    for (int i = 2; i < n; i++) cin >> b[i];

    vector<int> dp(n, 0);
    dp[1] = a[1];
    for (int i = 2; i < n; i++) dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);

    vector<int> ans;
    ans.push_back(n - 1);

    int cur = dp[n - 1];
    int idx = n - 1;
    while (idx > 0) 
    {
        if (cur == dp[idx - 1] + a[idx])
        {
            cur = dp[idx - 1];
            idx = idx - 1;
        }
        else
        {
            cur = dp[idx - 2];
            idx = idx - 2;
        }
        ans.push_back(idx);
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for (int i : ans)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
}
