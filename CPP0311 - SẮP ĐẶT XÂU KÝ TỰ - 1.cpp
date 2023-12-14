#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin >> s;
	map<char, int> mp;
	for (auto i : s)
	{
		mp[i]++;
		if (mp[i] > (s.length() + 1) / 2)
		{
			cout << 0 << endl;
			return;
		}
	}
	cout << 1 << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}