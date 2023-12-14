#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<int> row(n), col(n);
    int m = INT_MIN, total = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            total += a[i][j];
            col[i] += a[i][j];
            row[j] += a[i][j];
            m = max({m, col[i], row[j]});
        }
    cout << m * n - total << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}