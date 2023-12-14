#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - i - 1] or (s[i] - '0') % 2 == 1)
            return false;
    return true;
}
void solve()
{
    string s;
    cin >> s;
    if (check(s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}