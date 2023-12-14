#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin >> s;
	map<char, bool> mp;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		cnt = (mp[s[i]] == 0 ? cnt + 1 : cnt);
		mp[s[i]] = true;
	}
	map<char, int> tmp;
	int c = 0;
	int left = 0, right = -1, min = INT_MAX;
	for (int i = 0; i < s.size(); i++)
	{
		tmp[s[i]]++;
		if (tmp[s[i]] == 1)
			c++;
		if (c == cnt)
		{
			while (tmp[s[left]] > 1)
			{
				tmp[s[left]]--;
				left++;
			}
			if (min > i - left + 1)
			{
				min = i - left + 1;
				right = i;
			}
		}
	}
	cout << min << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}