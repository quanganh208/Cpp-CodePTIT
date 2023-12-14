#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            mp[a[i][j]]++;
            if (mp[a[i][j]] >= i + 1)
                mp[a[i][j]] = i + 1;
            else
                mp[a[i][j]] = 0;
        }
    int cnt = 0;
    for (auto i : mp)
        if (i.second == n)
            cnt++;
    cout << cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}