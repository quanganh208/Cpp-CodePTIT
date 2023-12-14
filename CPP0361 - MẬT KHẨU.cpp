#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for (auto &x : a)
        cin >> x;
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i != j and a[i].find(a[j]) != string::npos)
                count++;
    cout << count << endl;
}
int main()
{
    solve();
    return 0;
}