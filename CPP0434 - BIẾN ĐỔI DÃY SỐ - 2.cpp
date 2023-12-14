#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<int> ans;
    ans.push_back(a[0] * a[1]);
    for (int i = 1; i < a.size() - 1; i++)
        ans.push_back(a[i - 1] * a[i + 1]);
    ans.push_back(a[n - 1] * a[n - 2]);
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
}