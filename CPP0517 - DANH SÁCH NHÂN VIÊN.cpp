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
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}