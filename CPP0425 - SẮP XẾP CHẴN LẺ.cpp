#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &x : a)
		cin >> x;
	sort(a.begin(), a.end());
	for (int i = 0; i < n / 2; i++)
		cout << a[i] << " " << a[i + (n + 1) / 2] << " ";
	if (n % 2)
		cout << a[n / 2];
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