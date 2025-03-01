#include <iostream>
#include <vector>

using namespace std;

long long n, q, l, r;
vector<long long> arr(1, 0), pre(1, 0);

int main()
{
	cin >> n >> q;
	for (int i = 1; i <= n; ++i)
	{
		long long tmp; cin >> tmp;
		arr.push_back(tmp);
		pre.push_back(tmp + pre[i - 1]);
	}
	
	for (int i = 1; i <= q; ++i)
	{
		cin >> l >> r;
		
		cout << pre[r] - pre[l - 1] << endl; 
	}
	
	return 0;
}
