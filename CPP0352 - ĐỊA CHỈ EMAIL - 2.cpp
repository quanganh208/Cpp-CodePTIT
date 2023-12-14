#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	scanf("\n");
	map<string, int> mp;
	for (int t = 0; t < n; t++)
	{
		string s;
		getline(cin, s);
		stringstream ss(s);
		string token;
		vector<string> a;
		while (ss >> token)
			a.push_back(token);
		string user = "";
		for (auto c : *a.rbegin())
			user += (char)tolower(c);
		for (int i = 0; i < a.size() - 1; i++)
			user += (char)tolower(a[i][0]);
		mp[user]++;
		cout << user << (mp[user] > 1 ? to_string(mp[user]) : "") << "@ptit.edu.vn" << endl;
	}
}
int main()
{
	solve();
	return 0;
}