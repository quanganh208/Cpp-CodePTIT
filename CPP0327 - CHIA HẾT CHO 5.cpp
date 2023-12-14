#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int r = 0;
    for (auto c : s)
        r = (2 * r + (c - '0')) % 5;
    if (r % 5 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}