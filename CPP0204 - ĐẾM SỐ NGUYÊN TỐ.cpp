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
    int l, r;
    cin >> l >> r;
    int cnt = 0;
    for (int i = l; i <= r; i++)
        if (checkNT(i))
            cnt++;
    cout << cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}