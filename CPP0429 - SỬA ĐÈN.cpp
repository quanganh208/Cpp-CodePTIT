#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, b;
    cin >> n >> k >> b;
    int a;
    map<int, int> mp;
    for (int i = 0; i < b; i++)
    {
        cin >> a;
        mp[a] = 1;
    }
    int s = 0;
    for (int i = 1; i <= k; i++)
        s += mp[i];
    int min = s;
    for (int i = 2; i <= n - k + 1; i++)
    {
        s = s - mp[i - 1] + mp[i + k - 1];
        min = (s < min) ? s : min;
    }
    cout << min << endl;
}
int main()
{
    solve();
    return 0;
}