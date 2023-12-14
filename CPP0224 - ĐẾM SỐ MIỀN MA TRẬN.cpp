#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[105][105], vs[105][105];
int row[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int col[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
void dfs(int i, int j)
{
    if (i < 0 || j < 0 || i == n || j == m)
        return;
    if (a[i][j] == 0)
        return;
    if (vs[i][j])
        return;
    vs[i][j] = 1;
    for (int k = 0; k < 8; k++)
        dfs(i + row[k], j + col[k]);
}
void solve()
{
    memset(vs, 0, sizeof(vs));
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] == 1 && vs[i][j] == 0)
            {
                dfs(i, j);
                cnt++;
            }
    cout << cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}