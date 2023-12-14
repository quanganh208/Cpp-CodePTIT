#include <bits/stdc++.h>
using namespace std;
long long countDivisibleSubseq(string s, int m, int n)
{
    long long dp[m][n] = {};
    dp[0][(s[0] - '0') % n]++;
    for (int i = 1; i < m; i++)
    {
        dp[i][(s[i] - '0') % n]++;
        for (int j = 0; j < n; j++)
        {
            dp[i][j] += dp[i - 1][j];
            dp[i][((s[i] - '0') + j * 10) % n] += dp[i - 1][j];
        }
    }
    return dp[m - 1][0];
}
void solve()
{
    int m, n;
    string s;
    cin >> m >> n >> s;
    cout << countDivisibleSubseq(s, m, n) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}