#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n;
    vector<int> a(n - 1);
    for (auto &i : a)
        cin >> i;
    stable_sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
        if (i + 1 != a[i])
        {
            cout << i + 1 << endl;
            break;
        }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}