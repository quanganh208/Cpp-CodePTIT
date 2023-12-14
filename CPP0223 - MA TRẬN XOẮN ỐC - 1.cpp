#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    vector<vector<int>> b(n, vector<int>(m));
    int dong = n, cot = m, k = 1, p = 0;
    while (k <= n * m)
    {
        for (int i = p; i < cot; i++)
        {
            b[p][i] = k++;
            cout << a[p][i] << " ";
        }
        for (int i = p + 1; i < dong; i++)
        {
            b[i][cot - 1] = k++;
            cout << a[i][cot - 1] << " ";
        }
        if (p != dong - 1)
        {
            for (int i = cot - 2; i >= p; i--)
            {
                b[dong - 1][i] = k++;
                cout << a[dong - 1][i] << " ";
            }
        }
        if (p != cot - 1)
        {
            for (int i = dong - 2; i > p; i--)
            {
                b[i][p] = k++;
                cout << a[i][p] << " ";
            }
        }
        p++;
        dong--;
        cot--;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}