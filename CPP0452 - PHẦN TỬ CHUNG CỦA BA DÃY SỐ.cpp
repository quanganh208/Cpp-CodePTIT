#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    vector<long long> a(n1), b(n2), c(n3);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    for (auto &i : c)
        cin >> i;
    int i = 0, j = 0, k = 0;
    vector<long long> ans;
    while (i < n1 and j < n2 and k < n3)
        if (a[i] == b[j] and b[j] == c[k])
        {
            ans.push_back(a[i]);
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
            i++;
        else if (b[j] < c[k])
            j++;
        else
            k++;
    if (!ans.size())
        cout << -1;
    else
    {
        stable_sort(ans.begin(), ans.end());
        for (auto i : ans)
            cout << i << " ";
    }
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