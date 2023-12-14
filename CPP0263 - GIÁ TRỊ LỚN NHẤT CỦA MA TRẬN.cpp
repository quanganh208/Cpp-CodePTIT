#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int m[405][405];
    int A[405][405] = {}, B[405][405] = {};
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> m[i][j];
            A[i][j] = m[i][j];
            B[i][j] = m[i][j];
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            A[i][j] += A[i - 1][j - 1];
    for (int i = 1; i <= n; i++)
        for (int j = n; j > 0; j--)
            B[i][j] += B[i - 1][j + 1];
    int max = INT_MIN;
    int tmp;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 0; k < min(i, j); k++)
            {
                tmp = A[i][j] - A[i - min(i, j) + k][j - min(i, j) + k];
                tmp += B[i - min(i, j) + k][j + 1] - B[i][j - min(i, j) + k + 1];
                max = max > tmp ? max : tmp;
            }
    cout << max << endl;
}
int main()
{
    solve();
    return 0;
}