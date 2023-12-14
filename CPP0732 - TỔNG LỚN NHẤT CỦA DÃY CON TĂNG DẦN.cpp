#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n), dp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dp[i] = a[i];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if ((a[i] > a[j]) and (dp[i] < dp[j] + a[i]))
                dp[i] = dp[j] + a[i];
    cout << *max_element(dp.begin(), dp.end()) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}