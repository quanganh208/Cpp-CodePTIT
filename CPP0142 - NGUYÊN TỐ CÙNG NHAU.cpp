#include <bits/stdc++.h>
using namespace std;
bool checkNT(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}
void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i < n; i++)
        if (__gcd(i, n) == 1)
            cnt++;
    if (checkNT(cnt))
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}