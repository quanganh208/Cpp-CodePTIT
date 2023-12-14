#include <bits/stdc++.h>
using namespace std;
int idx = 1;
class SinhVien
{
private:
    string msv, name, className, dateOfBirth;
    float gpa;
public:
    friend istream &operator>>(istream &is, SinhVien &sv)
    {
        sv.msv = to_string(idx++);
        sv.msv.insert(0, 3 - sv.msv.length(), '0');
        sv.msv = "B20DCCN" + sv.msv;
        scanf("\n");
        getline(is, sv.name);
        getline(is, sv.className);
        getline(is, sv.dateOfBirth);
        is >> sv.gpa;
        sv.stardardDOB();
        sv.stardardName();
        return is;
    };
    friend ostream &operator<<(ostream &os, SinhVien sv)
    {
        os << sv.msv << " " << sv.name << " " << sv.className << " " << sv.dateOfBirth << " " << setprecision(2) << fixed << sv.gpa << endl;
        return os;
    };
    void stardardDOB()
    {
        if (dateOfBirth[1] == '/')
            dateOfBirth.insert(0, "0");
        if (dateOfBirth[4] == '/')
            dateOfBirth.insert(3, "0");
    }
    void stardardName()
    {
        stringstream ss(name);
        string token;
        string result = "";
        while (ss >> token)
        {
            token[0] = toupper(token[0]);
            for (int i = 1; i < token.length(); i++)
                token[i] = tolower(token[i]);
            result += token + " ";
        }
        name = result.substr(0, result.length() - 1);
    }
    float getGPA()
    {
        return gpa;
    }
};
bool cmp(SinhVien a, SinhVien b)
{
    return a.getGPA() > b.getGPA();
}
void sapxep(SinhVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}