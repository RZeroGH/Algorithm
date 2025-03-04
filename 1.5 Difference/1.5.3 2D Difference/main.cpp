#include <iostream>

using namespace std;
const int d = 1002;
long long dif[d][d] = { 0 };

void in(int x, int y, int a, int b, long long k)
{
	dif[x][y] += k;
	dif[x][b + 1] -= k;
	dif[a + 1][y] -= k;
	dif[a + 1][b + 1] += k;
}

int main()
{
	int n, m, q; cin >> n >> m >> q;
	
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			long long tmp; cin >> tmp;
			in(i, j, i, j, tmp);
		}
	}
	
	for (int i = 0; i < q; ++i)
	{
		int startx, starty, endx, endy;
		long long k;
		cin >> startx >> starty >> endx >> endy >> k;
		in(startx, starty, endx, endy, k);
	} 
	
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			dif[i][j] += dif[i - 1][j] + dif[i][j - 1] - dif[i - 1][j - 1];
			cout << dif[i][j] << ' '; 
		}
		cout << endl;
	}
	return 0;
}
