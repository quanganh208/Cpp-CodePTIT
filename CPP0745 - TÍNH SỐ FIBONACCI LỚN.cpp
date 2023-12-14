#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
long long f[1000];
long long fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (f[n] != -1)
        return f[n];
    f[n] = (fibo(n - 1) + fibo(n - 2)) % mod;
    return f[n];
}
void solve()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
}
int main()
{
    memset(f, -1, sizeof(f));
    int t;
    cin >> t;
    while (t--)
        solve();
}