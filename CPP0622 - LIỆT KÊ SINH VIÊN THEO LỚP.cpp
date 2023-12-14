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
    cin.ignore();
    while (t--)
    {
        string className;
        getline(cin, className);
        cout << "DANH SACH SINH VIEN LOP " << className << ":" << endl;
        for (int i = 0; i < n; i++)
        {
            if (ds[i].getClassName() == className)
                cout << ds[i];
        }
    }
    return 0;
}