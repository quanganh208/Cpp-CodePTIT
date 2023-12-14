#include <bits/stdc++.h>
using namespace std;
int m[1000000];
bool compare(int a, int b)
{
    if (m[a] == m[b])
        return a < b;
    return m[a] > m[b];
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < 1e5; i++)
        m[i] = 0;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
        m[i]++;
    }
    stable_sort(a.begin(), a.end(), compare);
    for (auto i : a)
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