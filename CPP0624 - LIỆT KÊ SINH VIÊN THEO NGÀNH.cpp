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
    string getMSV()
    {
        return msv;
    }
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
    cin.ignore();
    while (t--)
    {
        string department;
        getline(cin, department);
        for (int i = 0; i < department.length(); i++)
            department[i] = toupper(department[i]);
        cout << "DANH SACH SINH VIEN NGANH " << department << ":" << endl;
        if (department == "KE TOAN")
            department = "DCKT";
        else if (department == "CONG NGHE THONG TIN")
            department = "DCCN";
        else if (department == "AN TOAN THONG TIN")
            department = "DCAT";
        else if (department == "VIEN THONG")
            department = "DCVT";
        else if (department == "DIEN TU")
            department = "DCDT";
        for (int i = 0; i < n; i++)
        {
            if (ds[i].getClassName()[0] == 'E' and (department == "DCCN" or department == "DCAT"))
                continue;
            if (ds[i].getMSV().find(department) != string::npos)
                cout << ds[i];
        }
    }
    return 0;
}