#include <bits/stdc++.h>
using namespace std;
enum state
{
    DOWN,
    RIGHT,
    UP,
    LEFT
};
const state arrState[] = {DOWN, RIGHT, UP, LEFT};
void updateState(int &dong, int &cot, int &index, vector<vector<int>> a, state &state, int n)
{
    if (state == DOWN)
    {
        dong++;
        if (dong == 4 * n or !a[dong][cot])
        {
            dong--;
            cot++;
            index = (index + 1) % 4;
        }
    }
    else if (state == RIGHT)
    {
        cot++;
        if (cot == 4 * n or !a[dong][cot])
        {
            cot--;
            dong--;
            index = (index + 1) % 4;
        }
    }
    else if (state == UP)
    {
        dong--;
        if (dong == -1 or !a[dong][cot])
        {
            dong++;
            cot--;
            index = (index + 1) % 4;
        }
    }
    else if (state == LEFT)
    {
        cot--;
        if (cot == -1 or !a[dong][cot])
        {
            cot++;
            dong++;
            index = (index + 1) % 4;
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a(4 * n, vector<int>(4 * n));
    int cnt = 1;
    for (int i = 0; i < 4 * n; i++)
        for (int j = 0; j < 4 * n; j++)
            a[i][j] = cnt++;
    stack<int> st1, st2;
    int dong1, dong2, cot1, cot2, index1 = 0, index2 = 2;
    state state1, state2;
    dong1 = 0, cot1 = 0;
    dong2 = 4 * n - 1, cot2 = 4 * n - 1;
    for (int i = 0; i < 8 * n * n; i++)
    {
        state1 = arrState[index1];
        state2 = arrState[index2];
        st1.push(a[dong1][cot1]);
        st2.push(a[dong2][cot2]);
        a[dong1][cot1] = 0;
        a[dong2][cot2] = 0;
        updateState(dong1, cot1, index1, a, state1, n);
        updateState(dong2, cot2, index2, a, state2, n);
    }
    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    cout << endl;
    while (!st1.empty())
    {
        cout << st1.top() << " ";
        st1.pop();
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}