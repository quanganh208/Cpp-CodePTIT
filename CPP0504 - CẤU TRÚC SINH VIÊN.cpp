#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string id = "B20DCCN001";
    string name;
    string className;
    string date;
    float diem;
};
void chuanHoa(string &s)
{
    stringstream ss(s);
    string token;
    string ans;
    char delimiter = '/';
    while (getline(ss, token, delimiter))
    {
        if (token.length() < 2)
            token = '0' + token;
        ans += token + delimiter;
    }
    s = ans.erase(ans.length() - 1);
}
void nhap(SinhVien &a)
{
    getline(cin, a.name);
    getline(cin, a.className);
    getline(cin, a.date);
    cin >> a.diem;
    chuanHoa(a.date);
}
void in(SinhVien a)
{
    cout << a.id << " " << a.name << " " << a.className << " " << a.date << " " << fixed << setprecision(2) << a.diem;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}