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
    for (int i = 2; i <= n / 2; i++)
        if (checkNT(i) and checkNT(n - i))
        {
            cout << i << " " << n - i << endl;
            break;
        }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}