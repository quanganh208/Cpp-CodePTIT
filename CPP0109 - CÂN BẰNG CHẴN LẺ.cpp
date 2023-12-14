#include <bits/stdc++.h>
using namespace std;
bool isBalanced(int x)
{
    int evenCnt = 0, oddCnt = 0;
    while (x)
    {
        int tmp = x % 10;
        if (tmp % 2 == 0)
            evenCnt++;
        else
            oddCnt++;
        x /= 10;
    }
    if (evenCnt == oddCnt)
        return true;
    else
        return false;
}
void solve(int n)
{
    int start = pow(10, n - 1);
    int end = pow(10, n);
    int cnt = 0;
    for (int i = start; i < end; i++)
        if (isBalanced(i))
        {
            if (cnt == 10)
            {
                cnt = 0;
                cout << endl;
            }
            cout << i << " ";
            cnt++;
        }
}
int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}