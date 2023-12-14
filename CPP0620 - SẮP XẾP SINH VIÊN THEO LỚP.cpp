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
    if (a.getClassName() == b.getClassName())
        return a.getMSV() < b.getMSV();
    else
        return a.getClassName() < b.getClassName();
}
int main()
{
    SinhVien ds[1000];
    int N, i;
    cin >> N;
    cin.ignore();
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sort(ds, ds + N, compare);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}