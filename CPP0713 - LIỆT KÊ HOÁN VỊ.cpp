#include <bits/stdc++.h>
using namespace std;
int n, a[100], vt[100];
void HoanVi(int m)
{
    if (m > n)
    {
        for (int i = 1; i <= n; i++)
            cout << a[i];
        cout << " ";
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vt[i])
        {
            a[m] = i;
            vt[i] = 1;
            HoanVi(m + 1);
            vt[i] = 0;
        }
    }
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        vt[i] = 0;
    HoanVi(1);
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