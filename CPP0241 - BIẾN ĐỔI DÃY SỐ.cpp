#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int left = 0, right = n - 1, cnt = 0;
    while (left <= right)
        if (a[left] == a[right])
        {
            left++;
            right--;
        }
        else if (a[left] < a[right])
        {
            left++;
            a[left] += a[left - 1];
            cnt++;
        }
        else if (a[left] > a[right])
        {
            right--;
            a[right] += a[right + 1];
            cnt++;
        }
    cout << cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}