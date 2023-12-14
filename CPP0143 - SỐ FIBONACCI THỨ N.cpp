#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<long long> a = {0, 1};
    for (long long i = 2; i <= n; i++)
        a.push_back(a[i - 1] + a[i - 2]);
    cout << a[n] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}