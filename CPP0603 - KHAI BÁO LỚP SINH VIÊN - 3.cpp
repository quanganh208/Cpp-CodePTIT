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
        a.chuanHoaDate();
        a.chuanHoaName();
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
    void chuanHoaDate()
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
    void chuanHoaName()
    {
        stringstream ss(name);
        string token;
        string ans;
        while (ss >> token)
        {
            token[0] = toupper(token[0]);
            for (int i = 1; i < token.length(); i++)
                token[i] = tolower(token[i]);
            ans += token + " ";
        }
        name = ans;
    }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}