#include <bits/stdc++.h>
using namespace std;
vector<long long> a = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};
void solve()
{
    long long n;
    cin >> n;
    for (auto i : a)
        if (i == n)
        {
            cout << 1 << endl;
            return;
        }
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