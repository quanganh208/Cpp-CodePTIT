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
    vector<vector<int>> tmp(n + m - 1);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            tmp[i + j].push_back(a[i][j]);
    for (int i = 0; i < n + m - 1; i++)
        if (i % 2 == 0)
            reverse(tmp[i].begin(), tmp[i].end());
    for (int i = 0; i < n + m - 1; i++)
        for (auto j : tmp[i])
            cout << j << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}