#include <bits/stdc++.h>
using namespace std;
class SinhVien
{
public:
    SinhVien()
    {
        id = "";
        name = "";
        className = "";
        date = "";
        gpa = 0;
    }
    string id, name, className, date;
    float gpa;
    void nhap()
    {
        id = "B20DCCN001";
        getline(cin, name);
        getline(cin, className);
        getline(cin, date);
        cin >> gpa;
        chuanHoa();
    }
    void xuat()
    {
        cout << id << " " << name << " " << className << " " << date << " " << fixed << setprecision(2) << gpa;
    }
    void chuanHoa()
    {
        stringstream ss(date);
        string token;
        string ans;
        char delimiter = '/';
        while (getline(ss, token, delimiter))
        {
            if (token.length() < 2)
                token = '0' + token;
            ans += token + delimiter;
        }
        date = ans.erase(ans.length() - 1);
    }
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}