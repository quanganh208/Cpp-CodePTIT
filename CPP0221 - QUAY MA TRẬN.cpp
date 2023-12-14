#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int k = 0; k < m / 2; k++)
    {
        for (int i = k + 1; i < m - k; i++)
            b[k][i] = a[k][i - 1];
        for (int i = k + 1; i < n - k; i++)
            b[i][m - k - 1] = a[i - 1][m - k - 1];
        for (int i = m - k - 2; i >= k; i--)
            b[n - k - 1][i] = a[n - k - 1][i + 1];
        for (int i = n - k - 2; i >= k; i--)
            b[i][k] = a[i + 1][k];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (b[i][j])
                cout << b[i][j] << " ";
            else
                cout << a[i][j] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}