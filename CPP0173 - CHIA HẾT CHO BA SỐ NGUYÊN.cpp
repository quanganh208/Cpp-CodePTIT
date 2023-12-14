#include <bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b)
{
    return a / __gcd(a, b) * b;
}
void solve()
{
    int x, y, z, n;
    cin >> x >> y >> z >> n;
    long long left = pow(10, n - 1);
    long long right = pow(10, n);
    long long a = lcm(x, lcm(y, z));
    if (a >= right)
    {
        cout << -1 << endl;
        return;
    }
    long long multiply = left / a;
    if (left % a != 0)
        multiply++;
    cout << a * multiply << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}