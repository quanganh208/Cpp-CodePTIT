#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    set<int> ans;
    for (auto i : a)
        while (i)
        {
            ans.insert(i % 10);
            i /= 10;
        }
    for (auto i : ans)
        cout << i << " ";
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