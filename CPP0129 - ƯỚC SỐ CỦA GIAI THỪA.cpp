#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, p;
    cin >> n >> p;
    int count = 0;
    for (int i = p; i <= n; i += p)
    {
        int tmp = i;
        while (tmp % p == 0)
        {
            count++;
            tmp /= p;
        }
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}