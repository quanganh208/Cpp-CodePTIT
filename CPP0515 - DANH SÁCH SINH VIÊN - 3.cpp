#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string msv, name, className, dob;
    float gpa;
};
void nhap(SinhVien ds[], int N)
{
    for (int i = 0; i < N; i++)
    {
        scanf("\n");
        getline(cin, ds[i].name);
        cin >> ds[i].className >> ds[i].dob >> ds[i].gpa;
        ds[i].msv = "B20DCCN";
        if (i + 1 < 10)
            ds[i].msv += "00" + to_string(i + 1);
        else
            ds[i].msv += "0" + to_string(i + 1);
        if (ds[i].dob[1] == '/')
            ds[i].dob.insert(0, "0");
        if (ds[i].dob[4] == '/')
            ds[i].dob.insert(3, "0");
        stringstream ss(ds[i].name);
        string token, ans = "";
        while (ss >> token)
        {
            for (int i = 0; i < token.length(); i++)
                token[i] = tolower(token[i]);
            token[0] = toupper(token[0]);
            ans += token + " ";
        }
        ans.pop_back();
        ds[i].name = ans;
    }
}
void in(SinhVien ds[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << ds[i].msv << " " << ds[i].name << " " << ds[i].className << " " << ds[i].dob << " ";
        cout << fixed << setprecision(2);
        cout << ds[i].gpa << endl;
    }
}
void sapxep(SinhVien ds[], int N)
{
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (ds[i].gpa < ds[j].gpa)
            {
                SinhVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}