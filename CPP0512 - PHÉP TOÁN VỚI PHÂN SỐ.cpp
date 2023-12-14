#include <bits/stdc++.h>
using namespace std;
struct PhanSo
{
	long long tu, mau;
};
void process(PhanSo A, PhanSo B)
{
	PhanSo C;
	C.tu = A.tu * B.mau + B.tu * A.mau;
	C.mau = A.mau * B.mau;
	long long gcd = __gcd(C.tu, C.mau);
	C.tu /= gcd;
	C.mau /= gcd;
	C.tu *= C.tu;
	C.mau *= C.mau;
	cout << C.tu << "/" << C.mau << " ";
	PhanSo D;
	D.tu = A.tu * B.tu * C.tu;
	D.mau = A.mau * B.mau * C.mau;
	gcd = __gcd(D.tu, D.mau);
	D.tu /= gcd;
	D.mau /= gcd;
	cout << D.tu << "/" << D.mau << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}