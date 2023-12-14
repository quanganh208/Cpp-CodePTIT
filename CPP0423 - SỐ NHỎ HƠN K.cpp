#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] <= k)
			c++;
	}
	int cnt = 0;
	for (int i = 0; i < c; i++)
		if (a[i] > k)
			cnt++;
	int ans = cnt;
	for (int i = 0, j = c; j < n; i++, j++)
	{
		if (a[i] > k)
			cnt--;
		if (a[j] > k)
			cnt++;
		ans = min(ans, cnt);
	}
	cout << ans << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}