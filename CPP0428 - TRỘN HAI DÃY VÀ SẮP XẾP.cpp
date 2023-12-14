#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + m);
    for (int i = 0; i < n + m; i++)
        cin >> a[i];
    stable_sort(a.begin(), a.end());
    for (auto i : a)
        cout << i << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}