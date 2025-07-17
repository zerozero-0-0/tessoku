#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using ll = long long;
using ull = unsigned long long;

int main()
{
    int n;
    cin >> n;

    string ans = "";
    while (n) 
    {
        char c = (n % 2) + '0';
        ans.push_back(c);
        n /= 2;
    }

    while (ans.size() < 10) 
    {
        ans.push_back('0');
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;
}
