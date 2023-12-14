#include <bits/stdc++.h>
using namespace std;
int m[1000001];
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i <= 1000000; i++)
        m[i] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= 0)
            m[a[i]]++;
    }
    for (int i = 1; i <= 1000000; i++)
        if (!m[i])
        {
            cout << i << endl;
            break;
        }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}