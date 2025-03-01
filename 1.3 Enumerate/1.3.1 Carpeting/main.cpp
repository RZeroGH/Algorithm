#include <iostream>
#include <vector>
#include <climits>

const int N = 1e4 + 10;

using namespace std;

int main()
{
	int n = 0; cin >> n;
	int a[N], b[N],g[N],k[N];
	int x, y;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i] >> b[i] >> g[i] >> k[i];
	}
	cin >> x >> y;
	
	for (int i = n; i >= 1; --i)
	{
		if (x >= a[i] && x <= a[i] + g[i]
		&&	y >= b[i] && y <= b[i] + k[i])
		{
			cout << i;
			break;
		}
		
		if (i == 1)
		{
			cout << i;
		}
	}
	return 0;
} 
