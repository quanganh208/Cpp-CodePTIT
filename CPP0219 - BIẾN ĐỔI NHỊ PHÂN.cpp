#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int x;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            if (x)
            {
                for (int k = 0; k < n; k++)
                    a[k][j] = 1;
                for (int k = 0; k < m; k++)
                    a[i][k] = 1;
            }
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}