#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n;
    long long sum = 0, ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
        ans = max(ans, sum);
        if (sum < 0)
            sum = 0;
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}