#include <bits/stdc++.h>
using namespace std;
void solve(long long n)
{
    long long right = 0;
    long long cnt = 0;
    bool found = false;
    while (!found)
    {
        if (n % 1000 == 84)
        {
            found = true;
            n /= 100;
        }
        right += pow(10, cnt++) * (n % 10);
        n /= 10;
    }
    long long ans = n * pow(10, cnt - 1) + right;
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        solve(n);
    }
    return 0;
}