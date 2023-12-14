#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (ans == -1 and a[i] == x)
            ans = i + 1;
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