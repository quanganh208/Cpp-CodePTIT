#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin >> s;
	map<char, int> mp;
	int ans = 0;
	for (int i = 0; i < s.length(); i++)
		if (isalpha(s[i]))
			mp[s[i]]++;
		else
			ans += s[i] - '0';
	for (auto i : mp)
		for (int j = 0; j < i.second; j++)
			cout << i.first;
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