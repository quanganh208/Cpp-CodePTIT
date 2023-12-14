#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    cin >> m;
    vector<vector<int>> b(m, vector<int>(m));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            cin >> b[i][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] * b[i % m][j % m] << " ";
        cout << endl;
    }
}
int main()
{
    solve();
}