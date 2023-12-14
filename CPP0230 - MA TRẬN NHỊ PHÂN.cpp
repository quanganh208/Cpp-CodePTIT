#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        int cnt_1 = 0, cnt_0 = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            if (a[i][j])
                cnt_1++;
            else
                cnt_0++;
        }
        if (cnt_1 > cnt_0)
            ans++;
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}