#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    vector<int> left(n, 1), right(n, 1);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            left[i] = max(left[i], (a[i] > a[j]) * (left[j] + 1));
    for (int i = n - 1; i >= 0; i--)
        for (int j = n - 1; j > i; j--)
            right[i] = max(right[i], (a[i] > a[j]) * (right[j] + 1));
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = max(ans, left[i] + right[i] - 1);
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