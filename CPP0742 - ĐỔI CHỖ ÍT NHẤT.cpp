#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n);
    vector<int> tick(n, 0);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].second != i and tick[i])
            continue;
        int j = i, tmp = 0;
        while (!tick[j])
        {
            tmp++;
            tick[j] = 1;
            j = a[j].second;
        }
        tmp--;
        cnt += tmp;
    }
    cout << cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}