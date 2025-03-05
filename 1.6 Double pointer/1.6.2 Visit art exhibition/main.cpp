#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	int paint[n + 1] = { 0 };
	for (int i = 1; i <= n; ++i)
	{
		cin >> paint[i];
	}
	
	int i = 1, j = 1, kind = 0, glo_min = n, start = 1;
	unordered_map<int, int> mp;
	while(j <= n)
	{
		if (mp[paint[j]]++ == 0)
		{
			++kind;
		}
		while (kind == m)
		{
			if (glo_min > j - i + 1)
			{
				glo_min = j - i + 1;
				start = i;
			}
			
			if (mp[paint[i++]]-- == 1)
			{
				--kind;
			}
		}
		++j;
	}
	
	cout << start << ' ' << start + glo_min - 1 << endl;
	return 0;
}
