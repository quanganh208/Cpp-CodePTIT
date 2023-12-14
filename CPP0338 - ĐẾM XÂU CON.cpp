#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	int k;
	cin >> s >> k;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		set<char> st;
		for (int j = i; j < s.size(); j++)
		{
			st.insert(s[j]);
			if (st.size() > k)
				break;
			else if (st.size() == k)
				cnt++;
		}
	}
	cout << cnt << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}