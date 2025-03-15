#include <iostream>

using namespace std;

int main()
{
	int n, q, res; cin >> n;
	int arr[100002] = { 0 };
	
	for(int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}
	
	cin >> q;
	while(q--)
	{
		int x, y; cin >> x >> y;
		int l = 1, r = n, tmp;
		
		while(l < r)
		{
			int mid1 = (l + r) / 2;
			if (arr[mid1] >= x) r = mid1;
			else l = mid1 + 1;
		}
		if (arr[l] < x)
		{
			cout << 0 << endl;
			continue;
		}
		tmp = l;
		
		l = 1; r = n;
		while(l < r)
		{
			int mid2 = (l + r + 1) / 2;
			if (arr[mid2] <= y) l = mid2;
			else r = mid2 - 1;
		}
		if (arr[l] > y)
		{
			cout << 0 << endl;
			continue;
		}
		
		res = l - tmp + 1;
		cout << res << endl;
	}
	return 0;
}
