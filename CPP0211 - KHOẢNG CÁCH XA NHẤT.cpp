#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = n - 1; j >= i; j--)
        {
            if (j - i <= ans)
                break;
            if (a[i] <= a[j])
                ans = max(ans, j - i);
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