#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    int id;
    string msv, name, className, email, enterprise;
};
void sapxep(SinhVien sv[], int n)
{
    sort(sv, sv + n, [](SinhVien a, SinhVien b)
         { return a.msv < b.msv; });
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    SinhVien sv[n];
    for (int i = 0; i < n; i++)
    {
        sv[i].id = i + 1;
        cin >> sv[i].msv;
        cin.ignore();
        getline(cin, sv[i].name);
        cin >> sv[i].className >> sv[i].email >> sv[i].enterprise;
    }
    int t;
    cin >> t;
    while (t--)
    {
        string nameEnterprise;
        cin >> nameEnterprise;
        SinhVien ans[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
            if (sv[i].enterprise == nameEnterprise)
                ans[cnt++] = sv[i];
        sapxep(ans, cnt);
        for (int i = 0; i < cnt; i++)
            cout << ans[i].id << " " << ans[i].msv << " " << ans[i].name << " " << ans[i].className << " " << ans[i].email << " " << ans[i].enterprise << endl;
    }
}