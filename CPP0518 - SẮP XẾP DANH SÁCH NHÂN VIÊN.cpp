#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
	string id;
	string name;
	string gender;
	string date;
	string address;
	string mst;
	string dateSign;
};
void nhap(NhanVien &a)
{
	static int index = 1;
	string s = to_string(index++);
	s.insert(0, 5 - s.length(), '0');
	a.id = s;
	scanf("\n");
	getline(cin, a.name);
	getline(cin, a.gender);
	getline(cin, a.date);
	getline(cin, a.address);
	getline(cin, a.mst);
	getline(cin, a.dateSign);
}
void inds(NhanVien ds[], int N)
{
	for (int i = 0; i < N; i++)
		cout << ds[i].id << " " << ds[i].name << " " << ds[i].gender << " " << ds[i].date << " " << ds[i].address << " " << ds[i].mst << " " << ds[i].dateSign << endl;
}
bool cmp(NhanVien a, NhanVien b)
{
	string y1 = a.date.substr(6);
	string y2 = b.date.substr(6);
	string m1 = a.date.substr(0, 2);
	string m2 = b.date.substr(0, 2);
	string d1 = a.date.substr(3, 2);
	string d2 = b.date.substr(3, 2);
	if (y1 == y2)
	{
		if (m1 == m2)
			return d1 < d2;
		return m1 < m2;
	}
	return y1 < y2;
}
void sapxep(NhanVien a[], int n)
{
	sort(a, a + n, cmp);
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}