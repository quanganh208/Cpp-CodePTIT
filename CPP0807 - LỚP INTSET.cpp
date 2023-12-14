#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream inp("DATA.in");
    int n, m, x;
    inp >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        inp >> x;
        mp[x]++;
    }
    map<int, int> a;
    for (int i = 0; i < m; i++)
    {
        inp >> x;
        if (mp[x])
            a[x]++;
    }
    for (auto i : a)
        cout << i.first << " ";
}