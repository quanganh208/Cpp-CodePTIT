#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long ans = 0;
    while (true)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2)
                a[i]--, ans++;
            if (!a[i])
                cnt++;
        }
        if (cnt == n)
            break;
        for (int i = 0; i < n; i++)
            a[i] /= 2;
        ans++;
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}