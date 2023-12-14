#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
        min = min < a[i] ? min : a[i];
    int tmp = a[0] - min;
    for (int i = 1; i < n; i++)
        tmp = __gcd(tmp, a[i] - min);
    int ans = 0;
    for (int i = 1; i <= sqrt(tmp); i++)
        if (tmp % i == 0)
            if (tmp / i == i)
                ans++;
            else
                ans += 2;
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