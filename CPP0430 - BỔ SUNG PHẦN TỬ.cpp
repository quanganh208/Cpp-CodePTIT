#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    int min = 1e3, max = 0;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.insert(x);
        min = (x < min) ? x : min;
        max = (x > max) ? x : max;
    }
    cout << (max - min + 1) - a.size() << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}