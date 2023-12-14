#include <bits/stdc++.h>
#define faster()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);
using namespace std;
void solve()
{
    int n, m, L;
    cin >> n >> m >> L;
    vector<vector<int>> a(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
        }
    for (int i = 1; i <= n - L + 1; i++)
    {
        for (int j = 1; j <= m - L + 1; j++)
        {
            int x = i + L - 1, y = j + L - 1;
            cout << (a[x][y] - a[x][j - 1] - a[i - 1][y] + a[i - 1][j - 1]) / (L * L) << " ";
        }
        cout << endl;
    }
}
int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}