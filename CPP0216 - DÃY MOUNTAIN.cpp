#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int l, r;
    cin >> l >> r;
    int t1 = l, t2 = r;
    while (a[t1] < a[t1 + 1] and t1 < r)
        t1++;
    while (a[t2] < a[t2 - 1] and t2 > l)
        t2--;
    cout << (t1 == t2 ? "Yes" : "No") << endl;
}
main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}