#include <bits/stdc++.h>
using namespace std;
bool a[100000];
void sangNT()
{
    for (int i = 0; i <= 100000; i++)
        a[i] = true;
    a[0] = false;
    a[1] = false;
    for (int i = 2; i <= sqrt(100000); i++)
        if (a[i])
            for (int j = i * i; j <= 100000; j += i)
                a[j] = false;
}
void solve(long long n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (a[i])
        {
            while (n % i == 0)
            {
                cout << i << " ";
                n /= i;
            }
        }
    if (n != 1)
        cout << n;
    cout << endl;
}
int main()
{
    sangNT();
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