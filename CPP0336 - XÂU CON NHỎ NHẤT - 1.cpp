#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    map<char, int> m;
    int left, right, ans = INT_MAX;
    for (char c : s2)
        m[c]++;
    for (int i = 0; i < s1.size(); i++)
    {
        map<char, int> mp;
        for (int j = i; j < s1.size(); j++)
        {
            mp[s1[j]]++;
            bool check = false;
            for (char c = 'a'; c <= 'z'; c++)
                if (mp[c] < m[c])
                {
                    check = true;
                    break;
                }
            if (!check and ans > j - i + 1)
            {
                ans = j - i + 1;
                left = i;
                right = j;
            }
        }
    }
    if (ans == INT_MAX)
        cout << -1 << endl;
    else
    {
        for (int i = left; i <= right; i++)
            cout << s1[i];
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}