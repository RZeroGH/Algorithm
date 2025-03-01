#include <iostream>
#include <vector>

using namespace std;

int n, cnt = 0;
vector<int> a, b;

bool check(int b1)
{
	b[1] = b1;
	for (int i = 2; i <= n + 1; ++i)
	{
		b[i] = a[i - 1] - b[i - 1] - b[i - 2];
		if (b[i] < 0 || b[i] > 1)
		{
			return false;
		}
	}
	if (b[n + 1] != 0) return false;
	return true;
}

int main()
{
	cin >> n;
	a.resize(n + 1, 0) ;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	
	b.resize(n + 2, 0);
	b[0] = 0;
	
	if (check(1)) ++cnt;
	if (check(0)) ++cnt;
	
	cout << cnt; 
	return 0;
}
