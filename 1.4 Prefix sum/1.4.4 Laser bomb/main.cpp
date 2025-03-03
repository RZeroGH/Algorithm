#include <iostream>
#include <vector>
//#include <algorithm>

using namespace std;
const int N = 5001;
int n, r;
vector<vector<long long> > org(N, vector<long long>(N, 0)), pre(N, vector<long long>(N, 0));

int main()
{
	cin >> n >> r;
	
	while(n)
	{
		int x, y;
		long long v;
		cin >> x >> y >> v;
		org[x][y] += v;
		--n;
	}
	
	for(int i = 1; i < N; ++i)
	{
		for (int j = 1; j < N; ++j)
		{
			pre[i][j] = org[i][j] + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1]; 
		}
	}
	
	if (r >= N - 1) 
	{
		cout << pre[N - 1][N - 1] << endl;
		return 0;	
	}
	
	long long maximun = 0;
	for (int i = r; i < N; ++i)
	{
		for (int j = r; j < N; ++j)
		{
			maximun = max(maximun, pre[i][j] - pre[i - r][j] - pre[i][j - r] + pre[i - r][j - r]);
		}
	}
	cout << maximun;
	return 0;
}
