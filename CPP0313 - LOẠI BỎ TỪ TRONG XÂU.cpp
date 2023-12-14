#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    stringstream ss(s);
    string token;
    while (ss >> token)
    {
        if (token != s1)
            cout << token << " ";
    }
}
int main()
{
    solve();
    return 0;
}