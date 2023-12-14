#include <bits/stdc++.h>
using namespace std;
bool checkThuanNghich(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
        if (s[i] != s[s.length() - i - 1])
            return false;
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (checkThuanNghich(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}