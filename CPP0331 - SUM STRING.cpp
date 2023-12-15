#include <bits/stdc++.h>
using namespace std;
string addStrings(string a, string b)
{
    int remainder = 0;
    int mid = 0;
    string res = "";
    a.insert(0, max(0, (int)(b.length() - a.length())), '0');
    b.insert(0, max(0, (int)(a.length() - b.length())), '0');
    for (int i = a.length() - 1; i >= 0; i--)
    {
        mid = (a[i] - '0') + (b[i] - '0') + remainder;
        remainder = mid / 10;
        res = (char)(mid % 10 + '0') + res;
    }
    if (remainder > 0)
        res = "1" + res;
    return res;
}
bool checking(string str, int idx, int len1, int len2)
{
    string s1 = str.substr(idx, len1);
    string s2 = str.substr(idx + len1, len2);
    string s3 = addStrings(s1, s2);
    int len3 = s3.size();
    if (len3 > str.size() - len1 - len2 - idx)
        return false;
    if (s3 == str.substr(idx + len1 + len2, len3))
    {
        if (idx + len1 + len2 + len3 == str.size())
            return true;
        return checking(str, idx + len1, len2, len3);
    }
    return false;
}
bool isSumStr(string str)
{
    int n = str.size();
    for (int i = 1; i < n; i++)
        for (int j = 1; i + j < n; j++)
            if (checking(str, 0, i, j))
                return true;
    return false;
}
void solve()
{
    string s;
    cin >> s;
    if (isSumStr(s))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}