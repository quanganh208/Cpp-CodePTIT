#include <bits/stdc++.h>
using namespace std;
bool checkNT(long long x)
{
    if (x < 2)
        return false;
    for (long long i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}
void solve()
{
    long long l, r;
    cin >> l >> r;
    long long ans = 0;
    for (long long i = sqrt(l); i <= sqrt(r); i++)
        if (checkNT(i))
            ans++;
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}