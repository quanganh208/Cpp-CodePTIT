#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int ans = s.size();
    for (int i = 0; i < s.size(); i++)
        for (int j = 0; j < i; j++)
            if (s[i] == s[j])
                ans++;
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}