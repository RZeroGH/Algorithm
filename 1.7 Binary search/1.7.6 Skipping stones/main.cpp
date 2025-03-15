#include <iostream>

using namespace std;

const int N = 50010;
typedef long long ll;

ll l, m, n, arr[N];

ll calc(ll mid)
{
	ll ret = 0;
	for (int i = 0; i <= n; ++i)
	{
		int j = i + 1;
		while (j <= n && arr[j] - arr[i] < mid)
		{
			++j;
		}
		ret += j - i - 1;
		i = j - 1;
	}
	
	return ret;
}

int main()
{
	cin >> l >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}
	arr[(n++) + 1] = l;
	
	ll _left = 1, _right = l;
	while(_left < _right)
	{
		ll mid = (_left + _right + 1) / 2;
		if (calc(mid) <= m) _left = mid;
		else _right = mid - 1;
	}
	
	cout << _left << endl;
	return 0;
} 
