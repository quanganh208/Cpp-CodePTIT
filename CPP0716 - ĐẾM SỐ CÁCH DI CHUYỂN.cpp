#include <bits/stdc++.h>
using namespace std;
int n, k;
int ans = 0, curr = 0;
int a[20][20];
void dfs(int i, int j)
{
    if (i == n or j == n)
        return;
    curr += a[i][j];
    if (curr == k and i == n - 1 and j == n - 1)
        ans++;
    dfs(i + 1, j);
    dfs(i, j + 1);
    curr -= a[i][j];
}
void solve()
{
    ans = 0, curr = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    dfs(0, 0);
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