#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int m, n, a, b;
    cin >> m >> n >> a >> b;
    if (m > n)
        swap(m, n);
    int cnt = 0;
    for (int i = m; i <= n; i++)
        if (i % a == 0 or i % b == 0)
            cnt++;
    cout << cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}