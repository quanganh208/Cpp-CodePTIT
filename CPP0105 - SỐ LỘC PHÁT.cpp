#include <bits/stdc++.h>
using namespace std;
bool checkLocPhat(int x)
{
    while (x)
    {
        int tmp = x % 10;
        if (tmp == 0 or tmp == 6 or tmp == 8)
            x /= 10;
        else
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (checkLocPhat(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}