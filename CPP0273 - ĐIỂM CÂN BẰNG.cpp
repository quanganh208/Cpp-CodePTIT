#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> sum = {0};
    for (int &i : a)
    {
        cin >> i;
        sum.push_back(*sum.rbegin() + i);
    }
    int ans = -1;
    for (int i = 2; i < n; i++)
    {
        int left = sum[i - 1] - sum[0];
        int right = sum[n] - sum[i];
        if (left == right)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}