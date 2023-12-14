#include <bits/stdc++.h>
using namespace std;
class PhanSo
{
    friend istream &operator>>(istream &is, PhanSo &a)
    {
        is >> a.tuSo >> a.mauSo;
        return is;
    }
    friend ostream &operator<<(ostream &os, const PhanSo &a)
    {
        os << a.tuSo << "/" << a.mauSo;
        return os;
    }
    friend PhanSo operator+(PhanSo &p, PhanSo &q)
    {
        PhanSo t(1, 1);
        long long mauSoChung = p.mauSo * q.mauSo / __gcd(p.mauSo, q.mauSo);
        p.tuSo *= mauSoChung / p.mauSo;
        q.tuSo *= mauSoChung / q.mauSo;
        t.tuSo = p.tuSo + q.tuSo;
        t.mauSo = mauSoChung;
        t.rutgon();
        return t;
    }
public:
    PhanSo(long long tuSo, long long mauSo)
    {
        this->tuSo = tuSo;
        this->mauSo = mauSo;
    }
    long long tuSo, mauSo;
    void rutgon()
    {
        long long ucln = __gcd(tuSo, mauSo);
        tuSo /= ucln;
        mauSo /= ucln;
    }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}