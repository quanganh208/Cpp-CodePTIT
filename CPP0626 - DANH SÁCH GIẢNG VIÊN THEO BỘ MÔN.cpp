#include <bits/stdc++.h>
using namespace std;
class GiangVien
{
    friend istream &operator>>(istream &is, GiangVien &gv)
    {
        getline(is, gv.name);
        getline(is, gv.subject);
        gv.stardand();
        return is;
    };
    friend ostream &operator<<(ostream &os, GiangVien &gv)
    {
        os << gv.id << " " << gv.name << " " << gv.sub << endl;
        return os;
    };
    string name, subject, id, sub;
    void stardand()
    {
        stringstream ss(subject);
        string token;
        while (ss >> token)
            sub += toupper(token[0]);
        setID();
    }
    void setID()
    {
        static int index = 1;
        string s = to_string(index++);
        s.insert(0, 2 - s.length(), '0');
        id = "GV" + s;
    }
public:
    string getSub()
    {
        return sub;
    }
};
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    GiangVien a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string subject, sub;
        getline(cin, subject);
        stringstream ss(subject);
        string token;
        while (ss >> token)
            sub += toupper(token[0]);
        cout << "DANH SACH GIANG VIEN BO MON " << sub << ":" << endl;
        for (int i = 0; i < n; i++)
            if (a[i].getSub() == sub)
                cout << a[i];
    }
    return 0;
}