#include <iostream>
#include <algorithm> 

using namespace std;

const int N = 2e5 + 10;

int main()
{
	long long n, c, ret; cin >> n >> c;
	long long int arr[N];
	
	for(int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}
	
	sort(arr + 1, arr + 1 + n);
	
	for (int i = 2; i <= n; ++i)
	{
		long long b = arr[i] - c;
		ret += upper_bound(arr + 1, arr + i, b) - lower_bound(arr + 1, arr + i, b);
	}
	
	cout << ret << endl;
	return 0;
}
