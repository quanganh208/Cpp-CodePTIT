#include <bits/stdc++.h>
using namespace std;
bool compare(string a, string b)
{
    return a + b > b + a;
}
void solve()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for (auto &i : a)
        cin >> i;
    stable_sort(a.begin(), a.end(), compare);
    for (auto i : a)
        cout << i;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}