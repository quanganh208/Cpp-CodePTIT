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
    int a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    for (int i = a + 1; i < b; i++)
        if (checkNT(i))
            cout << i << " ";
    return 0;
}