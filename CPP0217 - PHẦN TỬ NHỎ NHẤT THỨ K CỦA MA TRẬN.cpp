#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, x;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            a.push_back(x);
        }
    sort(a.begin(), a.end());
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