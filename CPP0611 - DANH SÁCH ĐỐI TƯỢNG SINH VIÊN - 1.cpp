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
        is.ignore();
        getline(is, sv.name);
        getline(is, sv.className);
        getline(is, sv.dateOfBirth);
        is >> sv.gpa;
        sv.stardardDOB();
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
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}