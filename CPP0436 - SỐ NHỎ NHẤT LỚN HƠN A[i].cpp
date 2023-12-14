#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b;
    for (auto &i : a)
    {
        cin >> i;
        b.push_back(i);
    }
    stable_sort(b.begin(), b.end());
    for (auto i : a)
    {
        auto it = upper_bound(b.begin(), b.end(), i);
        if (it == b.end())
            cout << "_ ";
        else
            cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}