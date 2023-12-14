#include <bits/stdc++.h>
using namespace std;
struct Product
{
    int id;
    string name, group;
    double buy, sell, profit;
};
void nhap(Product &x, int i)
{
    scanf("\n");
    getline(cin, x.name);
    getline(cin, x.group);
    cin >> x.buy;
    cin >> x.sell;
    x.id = i;
    x.profit = x.sell - x.buy;
}
void sapxep(Product a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i].profit < a[j].profit)
                swap(a[i], a[j]);
}
void xuat(Product x)
{
    cout << x.id << " " << x.name << " " << x.group << " " << fixed << setprecision(2) << x.profit << endl;
}
int main()
{
    int n;
    cin >> n;
    Product a[n];
    for (int i = 0; i < n; i++)
        nhap(a[i], i + 1);
    sapxep(a, n);
    for (int i = 0; i < n; i++)
        xuat(a[i]);
    return 0;
}