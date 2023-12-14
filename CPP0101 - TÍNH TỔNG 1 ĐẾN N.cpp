#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> x;
        cout << (1 + x) * x / 2 << endl;
    }
    return 0;
}