#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	string s;
	cin.ignore();
	getline(cin, s);
	stringstream ss(s);
	string token;
	vector<string> a;
	while (ss >> token)
	{
		if ('a' <= token[0] and token[0] <= 'z')
			token[0] = toupper(token[0]);
		for (int i = 1; i < token.size(); i++)
			if ('A' <= token[i] and token[i] <= 'Z')
				token[i] = tolower(token[i]);
		a.push_back(token);
	}
	if (n == 1)
	{
		cout << *a.rbegin() << " ";
		for (int i = 0; i < a.size() - 1; i++)
			cout << a[i] << " ";
	}
	else
	{
		for (int i = 1; i < a.size(); i++)
			cout << a[i] << " ";
		cout << a[0];
	}
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}