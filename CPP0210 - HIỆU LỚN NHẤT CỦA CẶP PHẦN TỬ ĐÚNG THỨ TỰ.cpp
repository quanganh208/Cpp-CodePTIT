#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int max = -1;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[j] > a[i])
                max = (a[j] - a[i] > max) ? a[j] - a[i] : max;
    cout << max << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}