#include <bits/stdc++.h>
using namespace std;
long long findSolution(long long b, long long p)
{
    long long ans = 0;
    for (long long i = 1; i < p; i++)
        if ((i * i) % p == 1)
        {
            long long k = i + p * (b / p);
            if (k > b)
                k -= p;
            ans += (k - i) / p + 1;
        }
    return ans;
}
void solve()
{
    long long b, p;
    cin >> b >> p;
    cout << findSolution(b, p) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}