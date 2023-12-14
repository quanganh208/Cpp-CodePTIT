#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n;
    vector<int> sum1 = {0}, sum2 = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum1.push_back(*sum1.rbegin() + x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum2.push_back(*sum2.rbegin() + x);
    }
    int max = 0;
    for (int i = 0; i < n; i++)
        for (int j = n; j > i; j--)
            if (sum1[j] - sum1[i] == sum2[j] - sum2[i])
            {
                max = (max < j - i) ? j - i : max;
                break;
            }
    cout << max << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}