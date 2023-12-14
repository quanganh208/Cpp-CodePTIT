#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> tmp(n * n);
    for (int i = 0; i < n * n; i++)
        cin >> tmp[i];
    sort(tmp.begin(), tmp.end());
    vector<vector<int>> a(n, vector<int>(n));
    vector<vector<int>> b(n, vector<int>(n));
    int dong = n, cot = n, k = 0, p = 0;
    while (k < n * n)
    {
        for (int i = p; i < cot; i++)
        {
            b[p][i] = k;
            a[p][i] = tmp[k++];
        }
        for (int i = p + 1; i < dong; i++)
        {
            b[i][cot - 1] = k;
            a[i][cot - 1] = tmp[k++];
        }
        if (p != dong - 1)
        {
            for (int i = cot - 2; i >= p; i--)
            {
                b[dong - 1][i] = k;
                a[dong - 1][i] = tmp[k++];
            }
        }
        if (p != cot - 1)
        {
            for (int i = dong - 2; i > p; i--)
            {
                b[i][p] = k;
                a[i][p] = tmp[k++];
            }
        }
        p++;
        dong--;
        cot--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    solve();
}