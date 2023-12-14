#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, m;
    cin >> n >> m;
    long long sum = n * (n + 1) / 2;
    long long a = (sum + m) / 2;
    long long b = sum - a;
    if (__gcd(a, b) == 1 and abs(a - b) == m)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}