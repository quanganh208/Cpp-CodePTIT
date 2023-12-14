#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    stable_sort(a.begin(), a.end());
    bool flag = false;
    int left = 0, right = n - 1;
    while (left <= right and !flag)
    {
        int key = (left + right) / 2;
        if (a[key] == x)
            flag = true;
        else if (a[key] < x)
            left = key + 1;
        else
            right = key - 1;
    }
    if (flag)
        cout << 1 << endl;
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