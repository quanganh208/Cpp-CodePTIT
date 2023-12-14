#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int cntA = 0, cntB = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == 'A')
            if (cntB > cntA)
                cntB = cntA + 1;
            else
                cntB++;
        else if (s[i] == 'B')
            if (cntA > cntB)
                cntA = cntB + 1;
            else
                cntA++;
    cout << cntA;
}
int main()
{
    solve();
    return 0;
}