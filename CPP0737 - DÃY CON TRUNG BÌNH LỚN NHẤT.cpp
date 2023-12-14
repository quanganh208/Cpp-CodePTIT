#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    int left = 0, right = 0, sum = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    for (int i = 0; i < k; i++)
        sum += a[i];
    int ans = sum;
    for (int i = k; i < n; i++)
    {
        sum += a[i] - a[i - k];
        if (sum > ans)
        {
            ans = sum;
            left = i - k + 1;
            right = i;
        }
    }
    for (int i = left; i <= right; i++)
        cout << a[i] << " ";
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