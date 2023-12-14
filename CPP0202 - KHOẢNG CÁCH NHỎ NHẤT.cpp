#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    stable_sort(a.begin(), a.end());
    int ans = INT_MAX;
    for (int i = 1; i < n; i++)
        ans = min(ans, a[i] - a[i - 1]);
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