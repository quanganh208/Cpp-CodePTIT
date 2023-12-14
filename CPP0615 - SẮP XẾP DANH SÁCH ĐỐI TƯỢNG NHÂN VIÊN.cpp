#include <bits/stdc++.h>
using namespace std;
class NhanVien
{
    friend istream &operator>>(istream &is, NhanVien &a)
    {
        scanf("\n");
        static int index = 1;
        string s = to_string(index++);
        s.insert(0, 5 - s.length(), '0');
        a.id = s;
        getline(is, a.name);
        getline(is, a.gender);
        getline(is, a.date);
        getline(is, a.address);
        getline(is, a.mst);
        getline(is, a.dateSign);
        a.chuanHoa();
        a.separate();
        return is;
    }
    friend ostream &operator<<(ostream &os, NhanVien &a)
    {
        os << a.id << " " << a.name << a.gender << " " << a.date << " " << a.address << " " << a.mst << " " << a.dateSign << endl;
        return os;
    }
private:
    string id;
    string name;
    string gender;
    string date;
    string address;
    string mst;
    string dateSign;
public:
    int day, month, year;
    void chuanHoa()
    {
        stringstream ss(name);
        string token;
        name = "";
        while (ss >> token)
        {
            token[0] = toupper(token[0]);
            for (int i = 1; i < token.length(); i++)
                token[i] = tolower(token[i]);
            name += token + " ";
        }
        if (date[1] == '/')
            date.insert(0, "0");
        if (date[4] == '/')
            date.insert(3, "0");
    }
    void separate()
    {
        day = stoi(date.substr(3, 2));
        month = stoi(date.substr(0, 2));
        year = stoi(date.substr(6, 4));
    }
};
void sapxep(NhanVien ds[], int N)
{
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if ((ds[i].year > ds[j].year) or (ds[i].year == ds[j].year and ds[i].month > ds[j].month) or (ds[i].year == ds[j].year and ds[i].month == ds[j].month and ds[i].day > ds[j].day))
                swap(ds[i], ds[j]);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}