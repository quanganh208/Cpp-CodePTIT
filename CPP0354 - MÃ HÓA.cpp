#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c : s)
        mp[c]++;
    for (auto c : s)
        if (mp[c])
        {
            cout << c << mp[c];
            mp[c] = 0;
        }
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