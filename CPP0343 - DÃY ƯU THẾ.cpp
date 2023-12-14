#include <bits/stdc++.h>
using namespace std;
void solve()
{
    scanf("\n");
    int even = 0, odd = 0, cnt = 0;
    do
    {
        int n;
        cin >> n;
        cnt++;
        if (n % 2 == 0)
            even++;
        else
            odd++;
    } while (getchar() != '\n');
    if (cnt % 2 == 0 and even > odd)
        cout << "YES" << endl;
    else if (cnt % 2 == 1 and even < odd)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}