#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int n, k;
    cin >> n >> k;
    set<int> p, q;
    rep(_, n)
    {
        int cp;
        cin >> cp;
        p.insert(cp);
    }

    rep(_, n)
    {
        int cq;
        cin >> cq;
        q.insert(cq);
    }

    bool flg = false;
    for (int i : p)
    {
        if (q.count(k - i)) flg = true;
    }

    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;
}
