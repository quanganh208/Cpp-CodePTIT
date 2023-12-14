#include <bits/stdc++.h>
using namespace std;
int findRank(int matrix[15][15], int n, int m)
{
	int rank = 0;
	for (int row = 0; row < n; row++)
	{
		int col;
		for (col = 0; col < m; col++)
			if (matrix[row][col] != 0)
				break;
		if (col == m)
			continue;
		rank++;
		for (int i = 0; i < n; i++)
			if (i != row)
			{
				double ratio = matrix[i][col] / static_cast<double>(matrix[row][col]);
				for (int j = 0; j < m; j++)
					matrix[i][j] -= ratio * matrix[row][j];
			}
	}
	return rank;
}
void solve()
{
	int n, m;
	cin >> n >> m;
	int a[15][15];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	cout << findRank(a, n, m) << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}