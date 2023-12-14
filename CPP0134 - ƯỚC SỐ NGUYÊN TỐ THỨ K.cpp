#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 2; i <= sqrt(n); i++)
        while (n % i == 0)
        {
            a.push_back(i);
            n /= i;
        }
    if (n > 1)
        a.push_back(n);
    if (k > a.size())
        cout << -1 << endl;
    else
        cout << a[k - 1] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}