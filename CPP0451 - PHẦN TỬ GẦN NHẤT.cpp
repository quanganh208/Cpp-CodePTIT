#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int k, x;
    cin >> k >> x;
    int index = distance(a.begin(), lower_bound(a.begin(), a.end(), x));
    int i, j;
    if (a[index] == x)
    {
        i = index - 1;
        j = index + 1;
    }
    else
    {
        i = index - 1;
        j = index;
    }
    vector<int> ans;
    for (int _ = 0; _ < k / 2; _++)
    {
        ans.push_back(a[i--]);
        ans.push_back(a[j++]);
    }
    sort(ans.begin(), ans.end());
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}