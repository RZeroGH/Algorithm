#include <iostream>

using namespace std;
typedef long long ll;
const int N = 1e6 + 10;

ll m, arr[N] = { 0 }, l, r, mid, max_;
int n;

ll calc(ll h)
{
	ll ret = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (arr[i] > h) ret += arr[i] - h;
	}
	return ret;
}

int main()
{
	cin >> n >> m >> arr[1];
	max_ = arr[1];
	for (int i = 2; i <= n; ++i)
	{
		cin >> arr[i];
		max_ = max_ > arr[i] ? max_ : arr[i];
	}
	
	l = 1, r = max_; //æ‚∆¨∏ﬂ∂» 
	while (l < r)
	{
		mid = (l + r + 1) / 2;
		if (calc(mid) >= m) l = mid;
		else r = mid - 1;
	}
	
	cout << l << endl;
	return 0;
}
