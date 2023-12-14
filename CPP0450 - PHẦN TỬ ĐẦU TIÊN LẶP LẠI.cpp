#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    bool check = false;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (auto &i : a)
    {
        cin >> i;
        mp[i]++;
        if (mp[i] > 1 and !check)
        {
            cout << i << endl;
            check = true;
        }
    }
    if (!check)
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