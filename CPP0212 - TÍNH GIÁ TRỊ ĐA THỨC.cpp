#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    long long ans = a[0];
    for (int i = 1; i < n; i++)
        ans = (ans * x + a[i]) % (long long)(1e9 + 7);
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}