#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, a[100000];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    stable_sort(a, a + n);
    long long ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int tmp = lower_bound(a + i, a + n, a[i] + k) - a;
        ans += tmp - 1 - i;
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