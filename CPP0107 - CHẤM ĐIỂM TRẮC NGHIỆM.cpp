#include <bits/stdc++.h>
using namespace std;
double solve(int n)
{
    vector<char> key101 = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
    vector<char> key102 = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
    double count = 0;
    char x;
    for (int i = 0; i < 15; i++)
    {
        cin >> x;
        if ((n == 101 and x == key101[i]) or (n == 102 and x == key102[i]))
            count++;
    }
    return 10.0 / 15 * count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fixed << setprecision(2) << solve(n) << endl;
    }
    return 0;
}