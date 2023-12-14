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
    vector<vector<int>> kernel(3, vector<int>(3));
    for (auto &i : kernel)
        for (auto &j : i)
            cin >> j;
    long long sum = 0;
    for (int i = 0; i < n - 2; i++)
        for (int j = 0; j < m - 2; j++)
            for (int k = 0; k < 3; k++)
                for (int l = 0; l < 3; l++)
                    sum += a[i + k][j + l] * kernel[k][l];
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}