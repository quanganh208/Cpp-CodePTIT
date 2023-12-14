#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string id = "00001";
    string name;
    string gender;
    string date;
    string address;
    string mst;
    string dateSign;
};
void nhap(NhanVien &a)
{
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.date);
    getline(cin, a.address);
    getline(cin, a.mst);
    getline(cin, a.dateSign);
}
void in(NhanVien a)
{
    cout << a.id << " " << a.name << " " << a.gender << " " << a.date << " " << a.address << " " << a.mst << " " << a.dateSign;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}