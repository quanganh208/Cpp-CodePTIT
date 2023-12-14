#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    map<char, int> mp;
    int k, cnt = 0;
    cin >> s;
    for (auto c : s)
        mp[c]++;
    cin >> k;
    for (auto c : s)
        if (mp[c])
        {
            cnt++;
            mp[c] = 0;
        }
    if (cnt + k >= 26)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}