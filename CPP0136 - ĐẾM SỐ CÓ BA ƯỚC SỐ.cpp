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
    long long n;
    cin >> n;
    long long cnt = 0;
    for (long long i = 2; i <= sqrt(n); i++)
        if (checkNT(i))
            cnt++;
    cout << cnt << endl;
}
main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}