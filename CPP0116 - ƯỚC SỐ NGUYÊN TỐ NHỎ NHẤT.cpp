#include <bits/stdc++.h>
using namespace std;
int checkNT(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return i;
    return x;
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cout << checkNT(i) << " ";
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