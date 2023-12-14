#include <bits/stdc++.h>
using namespace std;
string addStrings(string num1, string num2)
{
	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());
	string result = "";
	int carry = 0;
	int i = 0;
	while (i < num1.size() or i < num2.size() or carry)
	{
		int sum = carry;
		if (i < num1.size())
			sum += num1[i] - '0';
		if (i < num2.size())
			sum += num2[i] - '0';
		carry = sum / 10;
		sum %= 10;
		result.push_back(sum + '0');
		i++;
	}
	reverse(result.begin(), result.end());
	return result;
}
void solve()
{
	string num1, num2;
	cin >> num1 >> num2;
	cout << addStrings(num1, num2) << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}