#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int tmp = 0;
    bool check = false;
    for (auto c : s)
    {
        if (check)
            tmp += c - '0';
        else
            tmp -= c - '0';
        check = !check;
    }
    if (tmp % 11 == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}