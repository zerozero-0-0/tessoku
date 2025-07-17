#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int n, x;
    cin >> n >> x;
    bool flg = false;
    rep(_, n)
    {
        int a;
        cin >> a;
        if (a == x) flg = true;
    }

    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;
}
