#include <bits/stdc++.h>
using namespace std;
void NhiPhan(int pos, string s)
{
    if (!pos)
    {
        cout << s << " ";
        return;
    }
    NhiPhan(pos - 1, s + "0");
    NhiPhan(pos - 1, s + "1");
}
void solve()
{
    int n;
    cin >> n;
    NhiPhan(n, "");
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