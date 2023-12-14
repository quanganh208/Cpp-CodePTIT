#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (((0 < i) and (i < n - 1)) and ((0 < j) and (j < n - 1)))
                a[i][j] = -1;
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (a[i][j] == -1)
                cout << "  ";
            else
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