#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> f(n, INT_MAX);
    f[0] = 0;
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (j + a[j] >= i)
                f[i] = min(f[i], f[j] + 1);
    if (f[n - 1] == INT_MAX)
        cout << -1 << endl;
    else
        cout << f[n - 1] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}