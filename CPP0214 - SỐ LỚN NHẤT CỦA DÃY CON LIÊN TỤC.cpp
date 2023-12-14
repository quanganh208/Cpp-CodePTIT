#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    deque<int> dq;
    for (int i = 0; i < k; ++i)
    {
        while (!dq.empty() and a[i] >= a[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    for (int i = k; i < n; ++i)
    {
        cout << a[dq.front()] << " ";
        while (!dq.empty() and dq.front() <= i - k)
            dq.pop_front();
        while (!dq.empty() and a[i] >= a[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    cout << a[dq.front()] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}