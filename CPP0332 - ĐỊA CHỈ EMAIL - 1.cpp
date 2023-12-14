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
    for (auto c : *a.rbegin())
        cout << (char)tolower(c);
    for (int i = 0; i < a.size() - 1; i++)
        cout << (char)tolower(a[i][0]);
    cout << "@ptit.edu.vn";
}
int main()
{
    solve();
    return 0;
}