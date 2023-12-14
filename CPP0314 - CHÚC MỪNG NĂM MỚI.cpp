#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    scanf("\n");
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        mp[s]++;
    }
    int cnt = 0;
    for (auto i : mp)
        if (i.second)
        {
            cnt++;
            i.second = 0;
        }
    cout << cnt << endl;
}
int main()
{
    solve();
    return 0;
}