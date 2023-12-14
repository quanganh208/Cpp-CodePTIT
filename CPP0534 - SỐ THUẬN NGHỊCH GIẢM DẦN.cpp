#include <bits/stdc++.h>
using namespace std;
bool checkTN(string s)
{
    if (s.length() < 2)
        return false;
    for (int i = 0; i < s.length() / 2; i++)
        if (s[i] != s[s.length() - i - 1])
            return false;
    return true;
}
bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first.length() == b.first.length())
        for (int i = 0; i < a.first.length(); i++)
            if (a.first[i] != b.first[i])
                return a.first[i] > b.first[i];
    return a.first.length() > b.first.length();
}
int main()
{
    string s;
    map<string, int> m;
    while (cin >> s)
    {
        if (checkTN(s))
            m[s]++;
    }
    vector<pair<string, int>> ans;
    for (auto i : m)
        ans.push_back(i);
    sort(ans.begin(), ans.end(), cmp);
    for (auto i : ans)
        cout << i.first << " " << i.second << endl;
}