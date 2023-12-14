#include <bits/stdc++.h>
using namespace std;
string multiplyStrings(string num1, string num2)
{
	string result(num1.size() + num2.size(), '0');
	for (int i = num1.size() - 1; i >= 0; i--)
	{
		int carry = 0;
		for (int j = num2.size() - 1; j >= 0; j--)
		{
			int tmp = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
			carry = tmp / 10;
			result[i + j + 1] = tmp % 10 + '0';
		}
		result[i] += carry;
	}
	size_t startPos = result.find_first_not_of('0');
	if (startPos != string::npos)
		return result.substr(startPos);
	return "0";
}
long long modulo(string a, long long b)
{
	long long result = 0;
	for (int i = 0; i < a.size(); i++)
		result = (result * 10 + (a[i] - '0')) % b;
	return result;
}
void solve()
{
	string a, b;
	long long c;
	cin >> a >> b;
	cin >> c;
	cout << modulo(multiplyStrings(a, b), c) << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}