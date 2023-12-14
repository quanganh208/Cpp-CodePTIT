#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
vector<vector<long long>> C(1005, vector<long long>(1005, 1));
void tohop()
{
	for (int i = 1; i <= 1000; i++)
		for (int j = 1; j < i; j++)
		{
			C[i][j] *= (C[i - 1][j] + C[i - 1][j - 1]) % mod;
			C[i][j] %= mod;
		}
}
void solve()
{
	int n, k;
	cin >> n >> k;
	cout << C[n][k] << endl;
}
int main()
{
	tohop();
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}