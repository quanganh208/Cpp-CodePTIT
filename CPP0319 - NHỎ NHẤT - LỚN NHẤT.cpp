#include <bits/stdc++.h>
using namespace std;
string genMin(int m, int s)
{
    string min = "";
    s -= 1;
    for (int i = 0; i < m; i++)
        if (s > 9)
        {
            min = '9' + min;
            s -= 9;
        }
        else
        {
            min = to_string(s) + min;
            s = 0;
        }
    min[0]++;
    return min;
}
string genMax(int m, int s)
{
    string max;
    for (int i = 0; i < m; i++)
        if (s > 9)
        {
            max += '9';
            s -= 9;
        }
        else
        {
            max += s + '0';
            s = 0;
        }
    return max;
}
int main()
{
    int m, s;
    cin >> m >> s;
    if (s > m * 9 or !s)
        cout << "-1 -1";
    else
    {
        string min = genMin(m, s);
        string max = genMax(m, s);
        cout << min << " " << max;
    }
    return 0;
}