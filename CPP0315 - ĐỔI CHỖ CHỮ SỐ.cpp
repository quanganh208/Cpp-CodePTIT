#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin >> s;
	int len = s.length();
	for (int i = len - 1; i >= 1; i--)
	{
		if (s[i] < s[i - 1])
		{
			char max = '0';
			int idx = i;
			for (int j = i; j < len; j++)
			{
				if (s[j] < s[i - 1] and s[j] > max)
				{
					max = s[j];
					idx = j;
				}
			}
			swap(s[i - 1], s[idx]);
			cout << s << endl;
			return;
		}
	}
	cout << -1 << endl;
}
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
		solve();
	return 0;
}