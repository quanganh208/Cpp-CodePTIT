#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> a(1000, vector<char>(1000));
int n, ans, i, j;
void findSquare(int k)
{
    if (i + k < n and j + k < n)
        if (a[i + k][j] == 'X' and a[i][j + k] == 'X')
        {
            findSquare(k + 1);
            for (int x = 1; x <= k; x++)
                if (a[i + k][j + x] == 'O' or a[i + x][j + k] == 'O')
                    return;
            ans = max(k + 1, ans);
        }
}
void solve()
{
    ans = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] == 'X' and ans <= min(n - i - 1, n - j - 1))
                findSquare(0);
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}