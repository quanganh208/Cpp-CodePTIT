#include <bits/stdc++.h>
using namespace std;
class NhanVien
{
    friend istream &operator>>(istream &is, NhanVien &a)
    {
        getline(is, a.name);
        getline(is, a.gender);
        getline(is, a.date);
        getline(is, a.address);
        getline(is, a.mst);
        getline(is, a.dateSign);
        return is;
    }
    friend ostream &operator>>(ostream &os, NhanVien &a)
    {
        os << a.id << " " << a.name << " " << a.gender << " " << a.date << " " << a.address << " " << a.mst << " " << a.dateSign;
        return os;
    }
public:
    NhanVien()
    {
        id = "00001";
    }
    string id;
    string name;
    string gender;
    string date;
    string address;
    string mst;
    string dateSign;
};
int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}