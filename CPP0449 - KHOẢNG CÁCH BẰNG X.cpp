#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    map<int, int> mp;
    for (auto &i : a)
    {
        cin >> i;
        mp[i] = 1;
    }
    for (auto i : a)
        if (mp[x + i])
        {
            cout << 1 << endl;
            return;
        }
    cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}