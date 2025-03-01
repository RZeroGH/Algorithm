#include <iostream>
#include <vector> 

using namespace std;

int n;

int main()
{
	cin >> n;
	long long cur_max, glo_max;
	cin >> cur_max;
	glo_max = cur_max;
	 
	for (int i = 1; i < n; ++i)
	{
		long long tmp; cin >> tmp;
		
		if (cur_max + tmp < tmp)
		{
			cur_max = tmp;
		}
		else
		{
			cur_max += tmp;
		}
		glo_max = max(cur_max, glo_max);
	}
	
	cout << glo_max << endl;
	
	return 0;
}
