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
    for (int i = 2; i * i <= n; i++)
        if (checkNT(i))
            cout << i * i << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}