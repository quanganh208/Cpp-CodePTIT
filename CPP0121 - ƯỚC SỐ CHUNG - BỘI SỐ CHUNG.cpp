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
void solve(long long a, long long b)
{
    cout << lcm(a, b) << " " << gcd(a, b) << endl;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}