#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
void output()
{
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << " ";
}
void backtrack(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            output();
        else
            backtrack(i + 1);
    }
}
void solve()
{
    cin >> n >> k;
    a.resize(k + 1);
    backtrack(1);
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