#include <bits/stdc++.h>
using namespace std;
struct Time
{
    int hour, minute, second, times;
};
int main()
{
    int n;
    cin >> n;
    Time t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i].hour >> t[i].minute >> t[i].second;
        t[i].times = t[i].hour * 3600 + t[i].minute * 60 + t[i].second;
    }
    sort(t, t + n, [](Time a, Time b)
         { return a.times < b.times; });
    for (int i = 0; i < n; i++)
    {
        cout << t[i].hour << " " << t[i].minute << " " << t[i].second << endl;
    }
    return 0;
}