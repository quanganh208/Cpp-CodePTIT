#include <bits/stdc++.h>
using namespace std;
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
};
int main()
{
    SinhVien ds[1000];
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
        cin >> ds[i];
    int t;
    cin >> t;
    while (t--)
    {
        string year;
        cin >> year;
        cout << "DANH SACH SINH VIEN KHOA " << year << ":" << endl;
        for (int i = 0; i < n; i++)
        {
            if (ds[i].getClassName().substr(1, 2) == year.substr(2, 2))
                cout << ds[i];
        }
    }
    return 0;
}