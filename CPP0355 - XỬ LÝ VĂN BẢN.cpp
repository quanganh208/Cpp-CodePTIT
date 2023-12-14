#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	int index = 0;
	while (cin >> s)
	{
		if (!index)
		{
			if ('a' <= s[0] and s[0] <= 'z')
				s[0] = toupper(s[0]);
		}
		else
		{
			if ('A' <= s[0] and s[0] <= 'Z')
				s[0] = tolower(s[0]);
		}
		for (int i = 1; i < s.size(); i++)
			if ('A' <= s[i] and s[i] <= 'Z')
				s[i] = tolower(s[i]);
		index++;
		if (*s.rbegin() == '.' or *s.rbegin() == '!' or *s.rbegin() == '?')
		{
			s.erase(s.end() - 1);
			cout << s << endl;
			index = 0;
		}
		else
			cout << s << " ";
	}
}
int main()
{
	solve();
	return 0;
}