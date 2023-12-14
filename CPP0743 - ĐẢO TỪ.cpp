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
    for (vector<string>::iterator it = prev(a.end(), 1); it != a.begin(); it--)
        cout << *it << " ";
    cout << a[0] << endl;
}
int main()
{
    int t;
    cin >> t;
    scanf("\n");
    while (t--)
        solve();
    return 0;
}