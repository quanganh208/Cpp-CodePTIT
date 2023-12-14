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
void in(PhanSo p)
{
    cout << p.tuSo << "/" << p.mauSo;
}
void rutgon(PhanSo &p)
{
    long long ucln = __gcd(p.tuSo, p.mauSo);
    p.tuSo /= ucln;
    p.mauSo /= ucln;
}
PhanSo tong(PhanSo p, PhanSo q)
{
    struct PhanSo t;
    long long mauSoChung = p.mauSo * q.mauSo / __gcd(p.mauSo, q.mauSo);
    p.tuSo *= mauSoChung / p.mauSo;
    q.tuSo *= mauSoChung / q.mauSo;
    t.tuSo = p.tuSo + q.tuSo;
    t.mauSo = mauSoChung;
    rutgon(t);
    return t;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}