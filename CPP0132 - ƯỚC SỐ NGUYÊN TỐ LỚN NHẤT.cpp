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
void solve(long long n)
{
    long long max = 0;
    for (long long i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            if (i > max and checkNT(i))
                max = i;
            if (n / i > max and checkNT(n / i))
                max = n / i;
        }
    cout << max << endl;
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