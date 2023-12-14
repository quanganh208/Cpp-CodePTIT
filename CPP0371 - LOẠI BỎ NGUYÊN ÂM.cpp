#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    getline(cin, s);
    for (auto c : s)
    {
        char c1 = tolower(c);
        if (c1 == 'a' or c1 == 'e' or c1 == 'i' or c1 == 'o' or c1 == 'u' or c1 == 'y')
            continue;
        else
            cout << "." << c1;
    }
}
int main()
{
    solve();
    return 0;
}