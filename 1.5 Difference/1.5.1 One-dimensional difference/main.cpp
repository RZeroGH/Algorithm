#include <iostream>
#include <vector>

using namespace std;

int m, n;
vector<long long> arr(1, 0), dif(1, 0);

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		long long tmp;
		cin >> tmp;
		arr.push_back(tmp);
		dif.push_back(tmp - arr[i - 1]);
	}
	
	while(m)
	{
		long long L, R, K;
		cin >> L >> R >> K; 
		dif[L] += K;
		if (R + 1 <= n) dif[R + 1] -= K;
		--m;
	}
	
	for (int i = 1; i <= n; ++i)
	{
		arr[i] = arr[i - 1] + dif[i];
	}
	
	for (int i = 1; i <= n; ++i)
	{
		cout << arr[i] << (i == n ? "" : " ");
	}
	
	return 0;
}
