#include <bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
struct Point
{
    double x, y;
};
void solve()
{
    Point a, b, c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    double ab = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    double bc = sqrt((b.x - c.x) * (b.x - c.x) + (b.y - c.y) * (b.y - c.y));
    double ac = sqrt((a.x - c.x) * (a.x - c.x) + (a.y - c.y) * (a.y - c.y));
    if (ab + bc <= ac or ab + ac <= bc or bc + ac <= ab)
    {
        cout << "INVALID" << endl;
        return;
    }
    double p = (ab + bc + ac) / 2;
    double s = sqrt(p * (p - ab) * (p - bc) * (p - ac));
    double r = (ab * bc * ac) / (4 * s);
    double S = PI * r * r;
    cout << fixed << setprecision(3) << S << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}