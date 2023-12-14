#include <bits/stdc++.h>
using namespace std;
long long poww(long long a, long long b, long long m)
{
	if (!b)
		return 1;
	long long v = poww(a, b / 2, m) % m;
	if (b % 2)
		return v * v % m * a % m;
	return v * v % m;
}
void solve()
{
	string a;
	long long b, m;
	cin >> a >> b >> m;
	long long k = 0;
	for (auto c : a)
		k = (k * 10 + c - '0') % m;
	long long ans = k;
	ans = poww(k, b, m);
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