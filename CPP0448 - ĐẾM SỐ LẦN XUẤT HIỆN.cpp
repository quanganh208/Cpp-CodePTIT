#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int cnt = 0;
    for (auto i : a)
        if (x == i)
            cnt++;
    if (cnt)
        cout << cnt << endl;
    else
        cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}