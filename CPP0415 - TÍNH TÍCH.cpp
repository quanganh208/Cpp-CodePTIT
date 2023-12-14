#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int min = INT_MAX, max = 0;
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
        max = (i > max) ? i : max;
    }
    vector<int> b(m);
    for (auto &i : b)
    {
        cin >> i;
        min = (i < min) ? i : min;
    }
    cout << (long long)max * min << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}