#include <bits/stdc++.h>
using namespace std;
long long max_sum_no_adjacent(int a[], int n)
{
    long long f[n];
    f[0] = a[0];
    f[1] = max(a[0], a[1]);
    for (int i = 2; i < n; i++)
        f[i] = max(f[i - 2] + a[i], f[i - 1]);
    return f[n - 1];
}
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << max_sum_no_adjacent(a, n) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}