#include <bits/stdc++.h>
using namespace std;
int countDivisible(string s, int k)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int tmp = 0;
        for (int j = i; j < s.length(); j++)
        {
            tmp = (tmp * 10 + (s[j] - '0')) % k;
            if (!tmp)
                count++;
        }
    }
    return count;
}
void solve()
{
    string s;
    cin >> s;
    cout << countDivisible(s, 8) - countDivisible(s, 24) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}