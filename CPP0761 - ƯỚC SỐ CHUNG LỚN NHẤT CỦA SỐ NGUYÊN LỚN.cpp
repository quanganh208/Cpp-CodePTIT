#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a;
    string b;
    cin >> a >> b;
    long long tmp = 0;
    for (int i = 0; i < b.size(); i++)
        tmp = (tmp * 10 + b[i] - '0') % a;
    cout << __gcd(a, tmp) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}