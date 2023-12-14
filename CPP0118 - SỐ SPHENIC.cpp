#include <bits/stdc++.h>
using namespace std;
bool check(int x)
{
    int a = x;
    int sum = 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        int cnt = 0;
        while (x % i == 0)
        {
            x /= i;
            cnt++;
        }
        if (cnt > 1)
            return false;
        else if (cnt == 1)
            sum++;
    }
    if (x > 1)
        sum++;
    return sum == 3;
}
void solve()
{
    int n;
    cin >> n;
    cout << check(n) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}