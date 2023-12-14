#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string token;
    vector<string> a;
    while (ss >> token)
        a.push_back(token);
    for (int i = 0; i < a.size() - 1; i++)
    {
        cout << (char)toupper(a[i][0]);
        for (int j = 1; j < a[i].size(); j++)
            cout << (char)tolower(a[i][j]);
        if (i < a.size() - 2)
            cout << " ";
    }
    cout << ", ";
    for (auto c : *a.rbegin())
        cout << (char)toupper(c);
}
int main()
{
    solve();
    return 0;
}