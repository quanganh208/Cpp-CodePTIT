#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}
void solve(long long n)
{
    long long ans = 1;
    for (int i = 2; i <= n; i++)
        ans = lcm(ans, i);
    cout << ans << endl;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        solve(n);
    }
    return 0;
}