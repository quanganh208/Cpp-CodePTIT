#include <bits/stdc++.h>
using namespace std;
bool check(long long x)
{
    int before = x % 10;
    x /= 10;
    while (x)
    {
        int tmp = x % 10;
        if (abs(tmp - before) != 1)
            return false;
        before = tmp;
        x /= 10;
    }
    return true;
}
void solve(long long n)
{
    if (check(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        solve(n);
    }
    return 0;
}