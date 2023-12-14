#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    string a;
    cin >> n >> a;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        if (a[i] == '2' or a[i] == '3' or a[i] == '5' or a[i] == '7')
            mp[a[i] - '0']++;
        else if (a[i] == '4')
        {
            mp[3]++;
            mp[2] += 2;
        }
        else if (a[i] == '6')
        {
            mp[5]++;
            mp[3]++;
        }
        else if (a[i] == '8')
        {
            mp[7]++;
            mp[2] += 3;
        }
        else if (a[i] == '9')
        {
            mp[7]++;
            mp[3] += 2;
            mp[2]++;
        }
    for (auto i = mp.rbegin(); i != mp.rend(); i++)
        for (int j = 0; j < i->second; j++)
            cout << i->first;
    cout << endl;
}
main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}