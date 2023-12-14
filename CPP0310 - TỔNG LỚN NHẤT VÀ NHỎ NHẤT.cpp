#include <bits/stdc++.h>
using namespace std;
long long genMin(string x)
{
    for (int i = 0; i < x.length(); i++)
        if (x[i] == '6')
            x[i] = '5';
    return stoll(x);
}
long long genMax(string x)
{
    for (int i = 0; i < x.length(); i++)
        if (x[i] == '5')
            x[i] = '6';
    return stoll(x);
}
void solve()
{
    string x, y;
    cin >> x >> y;
    unsigned long long min = genMin(x) + genMin(y);
    unsigned long long max = genMax(x) + genMax(y);
    cout << min << " " << max << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}