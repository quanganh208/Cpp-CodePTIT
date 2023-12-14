#include <bits/stdc++.h>
using namespace std;
long long run(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	if (sum < 10)
		return sum;
	return run(sum);
}
void solve()
{
	string s;
	cin >> s;
	int sum = 0;
	for (auto i : s)
		sum += i - '0';
	cout << (run(sum) == 9 ? 1 : 0) << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}