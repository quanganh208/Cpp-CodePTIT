#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, x, y;
    cin >> a >> x >> y;
    int n = __gcd(x, y);
    while (n--)
        cout << a;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}