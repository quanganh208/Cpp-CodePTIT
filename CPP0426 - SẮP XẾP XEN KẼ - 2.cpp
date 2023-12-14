#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    stable_sort(a.begin(), a.end());
    int start = 0, end = n - 1;
    bool flag = false;
    while (start <= end)
    {
        if (flag)
            cout << a[start++] << " ";
        else
            cout << a[end--] << " ";
        flag = !flag;
    }
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