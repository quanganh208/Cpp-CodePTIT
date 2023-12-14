#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    stable_sort(a.begin(), a.end());
    cout << a[k - 1] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}