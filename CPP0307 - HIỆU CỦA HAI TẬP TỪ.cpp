#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	map<string, bool> mp;
	string token;
	stringstream ss1(s1);
	while (ss1 >> token)
		mp[token] = true;
	stringstream ss2(s2);
	while (ss2 >> token)
		mp[token] = false;
	for (auto i : mp)
		if (i.second)
			cout << i.first << " ";
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	scanf("\n");
	while (t--)
		solve();
	return 0;
}