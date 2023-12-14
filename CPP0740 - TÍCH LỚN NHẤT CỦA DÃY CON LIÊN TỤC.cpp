#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    long long ans = LONG_LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        long long tmp = 1;
        for (int j = i; j < n; j++)
        {
            tmp *= a[j];
            ans = max(ans, tmp);
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}