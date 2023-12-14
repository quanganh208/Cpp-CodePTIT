#include <bits/stdc++.h>
using namespace std;
struct PhanSo
{
    long long tuSo, mauSo;
};
void nhap(PhanSo &p)
{
    cin >> p.tuSo;
    cin >> p.mauSo;
}
void rutgon(PhanSo &p)
{
    long long ucln = __gcd(p.tuSo, p.mauSo);
    p.tuSo /= ucln;
    p.mauSo /= ucln;
}
void in(PhanSo p)
{
    cout << p.tuSo << "/" << p.mauSo;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}