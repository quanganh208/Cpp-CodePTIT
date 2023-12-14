#include <bits/stdc++.h>
using namespace std;
class PhanSo
{
    friend istream &operator>>(istream &is, PhanSo &a)
    {
        is >> a.tuSo >> a.mauSo;
        return is;
    }
    friend ostream &operator<<(ostream &os, PhanSo &a)
    {
        os << a.tuSo << "/" << a.mauSo;
        return os;
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
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}