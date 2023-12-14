#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
	for (int i = 0; i < s.size() / 2; i++)
		if (s[i] != s[s.size() - i - 1])
			return false;
	return true;
}
void solve()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		if ('a' <= s[i] and s[i] <= 'z')
			s[i] = toupper(s[i]);
	string v;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == 'A' or s[i] == 'B' or s[i] == 'C')
			v.push_back('2');
		else if (s[i] == 'D' or s[i] == 'E' or s[i] == 'F')
			v.push_back('3');
		else if (s[i] == 'G' or s[i] == 'H' or s[i] == 'I')
			v.push_back('4');
		else if (s[i] == 'J' or s[i] == 'K' or s[i] == 'L')
			v.push_back('5');
		else if (s[i] == 'M' or s[i] == 'N' or s[i] == 'O')
			v.push_back('6');
		else if (s[i] == 'P' or s[i] == 'Q' or s[i] == 'R' or s[i] == 'S')
			v.push_back('7');
		else if (s[i] == 'T' or s[i] == 'U' or s[i] == 'V')
			v.push_back('8');
		else if (s[i] == 'W' or s[i] == 'X' or s[i] == 'Y' or s[i] == 'Z')
			v.push_back('9');
	if (check(v))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}