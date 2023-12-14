#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    map<long long, long long> mp;
    for (auto &i : a)
    {
        cin >> i;
        mp[i]++;
    }
    for (long long i = 0; i < n; i++)
        if (mp[i])
            cout << i << " ";
        else
            cout << -1 << " ";
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