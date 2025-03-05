#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int N; cin >> N;
	int sum = 0;
	int arr[N + 1] = { 0 }; 
	for (int i = 1; i <= N; ++i)
	{
		cin >> arr[i]; 
		sum += arr[i];
	}
	
	int i = 1, j = 1, maxdis = 0, k = 0;
	while(j <= N)
	{
		k += arr[j++];
		
		while(2 * k >= sum)
		{
			maxdis = max(maxdis, sum - k);
			k -= arr[i++]; 
		}
		
		maxdis = max(maxdis, k);
	}
	cout << maxdis << endl;
	
	return 0;
}
