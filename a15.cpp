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

    set<int> st;
    map<int, int> mp;

    auto c = a;
    sort(c.begin(), c.end());

    int idx = 1;
    for (int i : c) 
    {
        if (st.count(i)) continue;
        st.insert(i);
        mp[i] = idx;
        idx++;
    }

    vector<int> b(n);
    rep(i, n) b[i] = mp[a[i]];

    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;
}
