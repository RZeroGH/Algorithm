#include <iostream>
#include <vector> 

using namespace std;
int n, m, q, x1, y1, x2, y2;


int main()
{
	cin >> n >> m >> q;
	vector<vector<long long> > pre(n + 1, vector<long long>(m + 1, 0));
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			long long tmp; cin >> tmp;
			pre[i][j] = tmp + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
		}
	}
	
	for (int i = 0; i < q; ++i)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cout << pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1] << endl;
	}
	return 0;
}
