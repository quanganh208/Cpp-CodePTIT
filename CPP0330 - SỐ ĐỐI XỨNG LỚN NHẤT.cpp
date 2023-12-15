#include <bits/stdc++.h>
using namespace std;
string generate(string s)
{
    map<char, int> m;
    int cntOdd = 0, maxOdd = 0, idxMax = -1;
    for (int i = 0; i < s.size(); i++)
        m[s[i]]++;
    for (auto i : m)
        if (i.second % 2)
        {
            cntOdd++;
            if (i.second >= maxOdd)
            {
                maxOdd = i.second;
                idxMax = i.first;
            }
        }
    if (cntOdd == m.size())
    {
        int max = 0, idx = -1;
        for (auto i : m)
            if (i.first - '0' and i.second >= max)
            {
                max = i.second;
                idx = i.first;
            }
        return string(m[idx], idx);
    }
    string res = "";
    for (auto it = m.rbegin(); it != m.rend(); it++)
        if (it->second % 2 == 0)
            res += string(it->second / 2, it->first);
    if (res[0] == '0')
        res = "";
    string tmp = res;
    reverse(res.begin(), res.end());
    if (idxMax != -1)
        tmp += string(m[idxMax], idxMax) + res;
    else
        tmp += res;
    return tmp;
}
void solve()
{
    string s;
    cin >> s;
    cout << generate(s) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}