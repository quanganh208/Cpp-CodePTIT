#include <bits/stdc++.h>
using namespace std;
bool checkNT(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}
int main()
{
    long long n;
    cin >> n;
    if (checkNT(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}