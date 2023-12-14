#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    set<int> a;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.insert(x);
    }
    for (auto i : a)
        cout << i << " ";
}
int main()
{
    solve();
    return 0;
}