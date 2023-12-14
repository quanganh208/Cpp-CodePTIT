#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    map<int, int> mp;
    for (auto &x : a)
    {
        cin >> x;
        mp[x]++;
    }
    for (auto &x : b)
    {
        cin >> x;
        for (int i = 0; i < mp[x]; i++)
            cout << x << " ";
        mp[x] = 0;
    }
    for (auto x : mp)
        for (int i = 0; i < x.second; i++)
            cout << x.first << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}