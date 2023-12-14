#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string msv;
    string name;
    string className;
    float diem1, diem2, diem3;
};
void nhap(SinhVien &sv)
{
    cin.ignore();
    getline(cin, sv.msv);
    getline(cin, sv.name);
    getline(cin, sv.className);
    cin >> sv.diem1 >> sv.diem2 >> sv.diem3;
}
void in_ds(SinhVien *ds, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << ds[i].msv << " " << ds[i].name << " " << ds[i].className << " ";
        cout << fixed << setprecision(1) << ds[i].diem1 << " " << ds[i].diem2 << " " << ds[i].diem3 << endl;
    }
}
void sap_xep(SinhVien *ds, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (ds[i].name > ds[j].name)
                swap(ds[i], ds[j]);
}
int main()
{
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}