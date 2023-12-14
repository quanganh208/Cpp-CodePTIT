#include <bits/stdc++.h>
using namespace std;
bool checkNT(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
void solve(int n)
{
    bool flag = false;
    for (int i = 2; i <= n / 2; i++)
        if (checkNT(i) and checkNT(n - i))
        {
            cout << i << " " << n - i << endl;
            flag = true;
            break;
        }
    if (!flag)
        cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}