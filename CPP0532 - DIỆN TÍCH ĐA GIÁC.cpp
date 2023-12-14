#include <bits/stdc++.h>
using namespace std;
struct Point
{
    int x, y;
};
void solve()
{
    int n;
    cin >> n;
    Point a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i].x >> a[i].y;
    n--;
    int res = 0;
    for (int i = 0; i < n; i++)
        res += a[i].x * a[i + 1].y - a[i].y * a[i + 1].x;
    res += a[n].x * a[0].y - a[n].y * a[0].x;
    cout << setprecision(3) << fixed << res * 1.0 / 2 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}