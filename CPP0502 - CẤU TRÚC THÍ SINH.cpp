#include <bits/stdc++.h>
using namespace std;
struct ThiSinh
{
    string name;
    string date;
    double diem1, diem2, diem3, tongDiem;
};
void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    getline(cin, A.date);
    cin >> A.diem1;
    cin >> A.diem2;
    cin >> A.diem3;
    A.tongDiem = A.diem1 + A.diem2 + A.diem3;
}
void in(ThiSinh A)
{
    cout << A.name << " " << A.date << " " << fixed << setprecision(1) << A.tongDiem;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}