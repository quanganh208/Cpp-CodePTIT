#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    vector<int> a;
    int x;
    while (cin >> x)
    {
        mp[x]++;
        a.push_back(x);
    }
    for (int i = 0; i < a.size(); i++)
        if (mp[a[i]])
        {
            cout << a[i] << " " << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
}