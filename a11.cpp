#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int l = -1, r = n;
  while(r - l > 1)
  {
    int m = (l + r) / 2;
    if (a[m] > x) r = m;
    else l = m;
  }

  cout << r << endl;
}
