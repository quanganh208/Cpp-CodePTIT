#include <bits/stdc++.h>
using namespace std;
int f[100000];
void fibo()
{
    f[0] = 1;
    f[1] = 1;
    int a1 = 0, a2 = 1, a3 = 0;
    while (a3 <= 1000)
    {
        a3 = a1 + a2;
        a1 = a2;
        a2 = a3;
        f[a3] = 1;
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    for (auto i : a)
        if (f[i])
            cout << i << " ";
    cout << endl;
}
main()
{
    fibo();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}