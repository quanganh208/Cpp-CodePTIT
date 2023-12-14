#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto i : s)
        mp[i]++;
    for (auto i : s)
        if (mp[i] == 1)
        {
            cout << i;
            mp[i] = 0;
        }
    cout << endl;
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