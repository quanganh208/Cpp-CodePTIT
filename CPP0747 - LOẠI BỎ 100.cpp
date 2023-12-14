#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    while (s.find("100") != string::npos)
    {
        s.erase(s.find("100"), 3);
        ans++;
    }
    if (!ans)
        cout << endl; // TestCase ngu vl
    else
        cout << ans * 3 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}