#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < n - 1; i++)
        if (a[i] and a[i] == a[i + 1])
        {
            a[i] *= 2;
            a[i + 1] = 0;
        }
    int cnt = 0;
    for (auto i : a)
        if (i)
        {
            cout << i << " ";
            cnt++;
        }
    for (int i = 0; i < n - cnt; i++)
        cout << 0 << " ";
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