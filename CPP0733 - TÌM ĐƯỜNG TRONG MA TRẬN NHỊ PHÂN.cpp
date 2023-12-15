#include <bits/stdc++.h>
using namespace std;
int x, y, z, t, n, m;
bool a[2005][2005];
struct Data
{
    int x, y, k;
};
void BFS(int x, int y)
{
    queue<Data> q;
    q.push(Data{x, y, 0});
    a[x][y] = 0;
    while (!q.empty())
    {
        Data top = q.front();
        q.pop();
        int x = top.x, y = top.y, k = top.k;
        if (x == z and y == t)
        {
            cout << k << endl;
            return;
        }
        if (a[x - 1][y])
        {
            a[x - 1][y] = 0;
            q.push(Data{x - 1, y, k + 1});
        }
        if (a[x + 1][y])
        {
            a[x + 1][y] = 0;
            q.push(Data{x + 1, y, k + 1});
        }
        if (a[x][y - 1])
        {
            a[x][y - 1] = 0;
            q.push(Data{x, y - 1, k + 1});
        }
        if (a[x][y + 1])
        {
            a[x][y + 1] = 0;
            q.push(Data{x, y + 1, k + 1});
        }
    }
    cout << -1 << endl;
}
void solve()
{
    cin >> n >> m >> x >> y >> z >> t;
    x++;
    y++;
    z++;
    t++;
    for (int i = 0; i <= n + 1; i++)
        for (int j = 0; j <= m + 1; j++)
            a[i][j] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    if (!a[x][y])
    {
        cout << -1 << endl;
        return;
    }
    BFS(x, y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}