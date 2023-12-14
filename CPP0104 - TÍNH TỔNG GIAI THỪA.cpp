#include <bits/stdc++.h>
using namespace std;
long long giaiThua(int x)
{
    if (x == 1)
        return 1;
    return x * giaiThua(x - 1);
}
int main()
{
    int n;
    cin >> n;
    long long s = 0;
    for (int i = 1; i <= n; i++)
        s += giaiThua(i);
    cout << s;
    return 0;
}