#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (auto &i : a)
    {
        cin >> i;
        mp[i]++;
    }
    int ans = 0;
    for (auto i : a)
        if (mp[i] > 1)
        {
            ans += mp[i];
            mp[i] = 0;
        }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}