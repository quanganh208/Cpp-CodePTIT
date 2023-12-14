#include <bits/stdc++.h>
using namespace std;
struct Point
{
    double x, y;
};
void input(Point &a)
{
    cin >> a.x;
    cin >> a.y;
}
double distance(Point A, Point B)
{
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}