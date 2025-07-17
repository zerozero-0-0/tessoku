#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int d, n;
    cin >> d >> n;
    vector<int> attendence(d);

    rep(_, n)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (r == d - 1) attendence[l]++;
        else
        {
            attendence[l]++;
            attendence[r + 1]--;
        }
    }

    rep(i, d - 1) attendence[i + 1] += attendence[i];
    rep(i, d) cout << attendence[i] << endl;
}
