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
int condition_1(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int condition_2(int n)
{
    int tmp = n, sum = 0;
    for (int i = 2; i <= sqrt(n); i++)
        while (tmp % i == 0)
        {
            sum += condition_1(i);
            tmp /= i;
        }
    if (tmp > 1)
        sum += condition_1(tmp);
    return sum;
}
void solve()
{
    int n;
    cin >> n;
    if (!checkNT(n) and condition_1(n) == condition_2(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}