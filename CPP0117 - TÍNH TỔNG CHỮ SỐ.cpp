#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    do
    {
        int cnt = 0;
        while (n)
        {
            cnt += n % 10;
            n /= 10;
        }
        n = cnt;
    } while (n >= 10);
    cout << n << endl;
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