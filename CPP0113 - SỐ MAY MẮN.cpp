#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    if (n % 100 == 86)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}