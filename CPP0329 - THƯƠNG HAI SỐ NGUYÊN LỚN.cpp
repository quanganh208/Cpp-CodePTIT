#include <bits/stdc++.h>
using namespace std;
int cmp(string a, string b)
{
	a.insert(0, max(0, (int)(b.length() - a.length())), '0');
	b.insert(0, max(0, (int)(a.length() - b.length())), '0');
	if (a > b)
		return 1;
	if (a == b)
		return 2;
	return 3;
}
string addStrings(string a, string b)
{
	int remainder = 0;
	int mid = 0;
	string res = "";
	a.insert(0, max(0, (int)(b.length() - a.length())), '0');
	b.insert(0, max(0, (int)(a.length() - b.length())), '0');
	for (int i = a.length() - 1; i >= 0; --i)
	{
		mid = (a[i] - '0') + (b[i] - '0') + remainder;
		remainder = mid / 10;
		res = (char)(mid % 10 + '0') + res;
	}
	if (remainder > 0)
		res = "1" + res;
	return res;
}
string subtractStrings(string a, string b)
{
	int remainder = 0;
	int mid = 0;
	string res = "";
	a.insert(0, max(0, (int)(b.length() - a.length())), '0');
	b.insert(0, max(0, (int)(a.length() - b.length())), '0');
	for (int i = a.length() - 1; i >= 0; --i)
	{
		mid = (a[i] - 38) - (b[i] - '0') - remainder;
		remainder = (mid < 10) ? 1 : 0;
		res = (char)(mid % 10 + '0') + res;
	}
	while (res[0] == '0' and res.length() > 1)
		res.erase(0, 1);
	return res;
}
string divideStrings(string a, string b)
{
	string tb[11];
	tb[0] = "0";
	for (int i = 1; i <= 10; ++i)
		tb[i] = addStrings(tb[i - 1], b);
	string hold = a.substr(0, b.length() - 1);
	string res = "0";
	for (int i = b.length() - 1; i <= (int)a.length() - 1; ++i)
	{
		hold += a[i];
		int k = 1;
		while (cmp(hold, tb[k]) != 3)
			k++;
		res = res + (char)(k - 1 + '0');
		hold = subtractStrings(hold, tb[k - 1]);
	}
	while (res[0] == '0' and res.length() > 1)
		res.erase(0, 1);
	return res;
}
void solve()
{
	string x, y;
	cin >> x >> y;
	cout << divideStrings(x, y) << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}