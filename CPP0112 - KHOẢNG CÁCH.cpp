#include <bits/stdc++.h>
using namespace std;
void solve(double xA, double yA, double xB, double yB)
{
    double answer = sqrt(pow(abs(xA - xB), 2) + pow(abs(yA - yB), 2));
    cout << fixed << setprecision(4) << answer << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double xA, yA, xB, yB;
        cin >> xA >> yA >> xB >> yB;
        solve(xA, yA, xB, yB);
    }
    return 0;
}