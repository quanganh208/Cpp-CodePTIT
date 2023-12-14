#include <bits/stdc++.h>
using namespace std;
string multiplyStrings(string num1, string num2)
{
    string result(num1.size() + num2.size(), '0');
    for (int i = num1.size() - 1; i >= 0; i--)
    {
        int carry = 0;
        for (int j = num2.size() - 1; j >= 0; j--)
        {
            int tmp = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = tmp / 10;
            result[i + j + 1] = tmp % 10 + '0';
        }
        result[i] += carry;
    }
    size_t startPos = result.find_first_not_of('0');
    if (startPos != string::npos)
        return result.substr(startPos);
    return "0";
}
void solve()
{
    string x, y;
    cin >> x >> y;
    cout << multiplyStrings(x, y) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}