#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int cnt = 0;
    int x = 2;
    while (n > 1)
    {
        if (n % x == 0)
        {
            cnt++;
            n /= x;
        }
        else
        {
            if (cnt)
                cout << x << " " << cnt << " ";
            cnt = 0;
            x++;
        }
    }
    if (cnt)
        cout << x << " " << cnt << " ";
    cout << endl;
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