#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < s.length(); i++)
	{
		int tmp = 0;
		while (isdigit(s[i]))
		{
			tmp = tmp * 10 + s[i] - '0';
			i++;
		}
		ans += tmp;
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