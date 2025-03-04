#include <iostream>
#include <unordered_map> 

using namespace std;
const int N = 1e6 + 10;
int arr[N] = { 0 };
int t, n; 

int main()
{
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; ++i)
		{
			cin >> arr[i];
		}
		
		int res = 0, i = 1, j = 1;
		unordered_map<int, int> mp;
		while(j <= n)
		{
			mp[arr[j]]++;
			while (mp[arr[j]] > 1)
			{
				mp[arr[i++]]--;
			}
			res = max(res, j - i + 1);
			++j;
		}
		
		cout << res << endl;
	}
	
	return 0;
}
