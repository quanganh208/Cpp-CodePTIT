#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &i : a)
    {
        cin >> i;
        i *= i;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (binary_search(a.begin(), a.end(), a[i] + a[j]))
            {
                cout << "YES" << endl;
                return;
            }
    cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}