#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> sum = {0};
    for (auto &i : a)
    {
        cin >> i;
        sum.push_back(i + *sum.rbegin());
    }
    for (int i = 0; i < k; i++)
    {
        int left, right;
        cin >> left >> right;
        cout << sum[right] - sum[left - 1] << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}