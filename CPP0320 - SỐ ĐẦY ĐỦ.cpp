#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin >> s;
	if (s[0] == '0')
	{
		cout << "INVALID" << endl;
		return;
	}
	map<char, int> mp;
	for (auto c : s)
		if ('0' <= c and c <= '9')
			mp[c]++;
		else
		{
			cout << "INVALID" << endl;
			return;
		}
	for (int i = 0; i < 10; i++)
		if (!mp['0' + i])
		{
			cout << "NO" << endl;
			return;
		}
	cout << "YES" << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}