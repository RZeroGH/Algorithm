#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;
int m, n;
const int N = 1e5 + 10;
ll arr[N] = { 0 };

int find(ll x)
{
	int l = 1, r = m;
	while(l < r)
	{
		int mid = (l + r) / 2;
		if (arr[mid] >= x) r = mid;
		else l = mid + 1;
	}
	
	return l;
}

int main()
{
	cin >> m >> n;
	for (int i = 1; i <= m; ++i) cin >> arr[i];
	sort(arr + 1, arr + 1 + m);
	arr[0] = -1e7 + 10;
	
	ll ret = 0;
	for (int i = 0; i < n; ++i)
	{
		ll b; cin >> b;
		int pos = find(b);
		ret += min(abs(arr[pos] - b), abs(arr[pos - 1] - b));
	}
	
	cout << ret;
	return 0;
}
