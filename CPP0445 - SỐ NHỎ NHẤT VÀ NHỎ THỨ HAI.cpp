#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    set<int> s(a.begin(), a.end());
    if (s.size() > 1)
        cout << *s.begin() << " " << *++s.begin() << endl;
    else
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