#include <bits/stdc++.h>
using namespace std;
bool checkNT(long long x)
{
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}
bool checkSoTang(long long x)
{
    int max = 10;
    while (x)
    {
        if (x % 10 >= max)
            return false;
        max = x % 10;
        x /= 10;
    }
    return true;
}
bool checkSoGiam(long long x)
{
    int min = -1;
    while (x)
    {
        if (x % 10 <= min)
            return false;
        min = x % 10;
        x /= 10;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    long long cnt = 0;
    for (long long i = pow(10, n - 1); i < pow(10, n); i++)
        if ((checkSoTang(i) or checkSoGiam(i)) and checkNT(i))
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