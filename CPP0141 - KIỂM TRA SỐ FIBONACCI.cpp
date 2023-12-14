#include <bits/stdc++.h>
using namespace std;
long long f[100];
void fibo()
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 92; i++)
        f[i] = f[i - 1] + f[i - 2];
}
void solve()
{
    long long n;
    cin >> n;
    for (int i = 0; i <= 92; i++)
        if (n == f[i])
        {
            cout << "YES" << endl;
            return;
        }
        else if (n < f[i])
            break;
    cout << "NO" << endl;
}
main()
{
    fibo();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}