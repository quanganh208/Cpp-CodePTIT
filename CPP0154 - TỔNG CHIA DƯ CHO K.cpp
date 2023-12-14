#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;
    long long ans = 0;
    while (n / k)
    {
        ans += k * (k - 1) / 2;
        n -= k;
    }
    ans += n * (n + 1) / 2;
    if (ans == k)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}