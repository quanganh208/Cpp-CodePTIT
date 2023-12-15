#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (auto &i : a)
        for (auto &j : i)
            cin >> j;
    int ans = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        vector<int> sum(n, 0);
        for (int j = i; j < m; j++)
        {
            int s = 0;
            for (int k = 0; k < n; k++)
            {
                sum[k] += a[k][j];
                s = max(sum[k], sum[k] + s);
                ans = max(ans, s);
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}