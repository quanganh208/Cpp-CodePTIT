#include <bits/stdc++.h>
using namespace std;
bool check1(string s)
{
	int index = 5;
	while (index < s.length() - 1)
		if (s[index] >= s[index + 1])
			return false;
		else
			index++;
	return true;
}
bool check2(string s)
{
	int index = 5;
	while (index < s.length() - 1)
	{
		if (s[index] != s[index + 1])
			return false;
		else
			index++;
	}
	return true;
}
bool check3(string s)
{
	if (s[5] == s[6] and s[6] == s[7] and s[8] == s[9])
		return true;
	return false;
}
bool check4(string s)
{
	int index = 5;
	while (index < s.length())
	{
		if (s[index] != '6' and s[index] != '8')
			return false;
		else
			index++;
	}
	return true;
}
void solve()
{
	string s;
	cin >> s;
	s.erase(8, 1);
	if (check1(s) or check2(s) or check3(s) or check4(s))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
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