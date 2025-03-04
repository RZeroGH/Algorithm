#include <iostream>

using namespace std;
const int R = 1000;
int blanket[R + 2][R + 2] = { 0 };
int n, m;

int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		int startx, starty, endx, endy; cin >> startx >> starty >> endx >> endy;
		
		blanket[startx][starty] += 1;
		blanket[startx][endy + 1] -= 1;
		blanket[endx + 1][starty] -= 1;
		blanket[endx + 1][endy + 1] += 1;
	}
	
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			blanket[i][j] += blanket[i - 1][j] + blanket[i][j - 1] - blanket[i - 1][j - 1];
			
			cout << blanket[i][j] << ' ';
		}
		cout << "\n";
	}
	
	
	return 0;
}
