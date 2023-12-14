#include <bits/stdc++.h>
using namespace std;
int idx = 1;
class SinhVien
{
private:
    string msv, name, className, email;
public:
    friend istream &operator>>(istream &is, SinhVien &sv)
    {
        getline(is, sv.msv);
        getline(is, sv.name);
        getline(is, sv.className);
        getline(is, sv.email);
        return is;
    };
    friend ostream &operator<<(ostream &os, SinhVien sv)
    {
        os << sv.msv << " " << sv.name << " " << sv.className << " " << sv.email << endl;
        return os;
    };
    string getClassName()
    {
        return className;
    }
    string getMSV()
    {
        return msv;
    }
};
bool compare(SinhVien a, SinhVien b)
{
    return a.getMSV() < b.getMSV();
}
int main()
{
    SinhVien ds[1000];
    int n = 0;
    while (cin >> ds[n])
        n++;
    sort(ds, ds + n, compare);
    for (int i = 0; i < n; i++)
        cout << ds[i];
    return 0;
}