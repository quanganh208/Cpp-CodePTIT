#include <bits/stdc++.h>
using namespace std;
class SinhVien
{
    friend istream &operator>>(istream &is, SinhVien &a)
    {
        a.id = "B20DCCN001";
        getline(cin, a.name);
        getline(cin, a.className);
        getline(cin, a.date);
        is >> a.gpa;
        a.chuanHoa();
        return is;
    }
    friend ostream &operator<<(ostream &os, SinhVien &a)
    {
        os << a.id << " " << a.name << " " << a.className << " " << a.date << " " << fixed << setprecision(2) << a.gpa;
        return os;
    }
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
    cin >> a;
    cout << a;
    return 0;
}