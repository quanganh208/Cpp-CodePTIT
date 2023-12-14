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
    string getLastName()
    {
        stringstream ss(name);
        string token;
        while (ss >> token)
            sub = token;
        return sub;
    }
    string getID()
    {
        return id;
    }
};
bool compare(GiangVien a, GiangVien b)
{
    if (a.getLastName() == b.getLastName())
        return a.getID() < b.getID();
    return a.getLastName() < b.getLastName();
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    GiangVien a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, compare);
    for (int i = 0; i < n; i++)
        cout << a[i];
    return 0;
}