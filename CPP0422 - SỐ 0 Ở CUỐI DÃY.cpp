#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (auto &i : a)
        cin >> i;
    long long cnt = 0;
    for (auto i : a)
        if (i)
            cout << i << " ";
        else
            cnt++;
    for (long long i = 0; i < cnt; i++)
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