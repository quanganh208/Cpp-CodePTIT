#include <bits/stdc++.h>
using namespace std;
bool check(int x, int k, int j, vector<vector<int>> a)
{
    for (int i = x; i <= k; i++)
        if (!a[i][j])
            return false;
    return true;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int k = i; k < n; k++)
        {
            int cnt = 0;
            for (int j = 0; j < m; j++)
                if (check(i, k, j, a))
                    cnt++;
            ans = max(ans, (k - i + 1) * cnt);
        }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}