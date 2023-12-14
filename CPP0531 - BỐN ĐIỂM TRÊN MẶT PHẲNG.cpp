#include <bits/stdc++.h>
using namespace std;
struct Point
{
    int x, y, z;
};
Point createVector(Point a, Point b)
{
    Point c;
    c.x = b.x - a.x;
    c.y = b.y - a.y;
    c.z = b.z - a.z;
    return c;
}
void solve()
{
    Point a, b, c, d;
    cin >> a.x >> a.y >> a.z;
    cin >> b.x >> b.y >> b.z;
    cin >> c.x >> c.y >> c.z;
    cin >> d.x >> d.y >> d.z;
    Point ab = createVector(a, b);
    Point ac = createVector(a, c);
    Point ad = createVector(a, d);
    int volume = ab.x * (ac.y * ad.z - ac.z * ad.y) - ab.y * (ac.x * ad.z - ac.z * ad.x) + ab.z * (ac.x * ad.y - ac.y * ad.x);
    if (!volume)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}