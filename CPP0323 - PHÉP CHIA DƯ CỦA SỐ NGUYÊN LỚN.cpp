#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string n;
	cin >> n;
	long long m;
	cin >> m;
	long long ans = 0;
	for (auto c : n)
		ans = (ans * 10 + c - '0') % m;
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