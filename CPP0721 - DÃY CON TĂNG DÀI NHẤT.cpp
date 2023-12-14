#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), f(n, 0);
    for (auto &x : a)
        cin >> x;
    for (int i = 0; i < n; i++)
    {
        f[i] = 1;
        for (int j = 0; j < i; j++)
            if (a[j] < a[i])
                f[i] = max(f[i], f[j] + 1);
    }
    int res = 0;
    for (auto x : f)
        res = max(res, x);
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}