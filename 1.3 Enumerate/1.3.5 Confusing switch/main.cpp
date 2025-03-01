#include <iostream>

using namespace std;

int t = 0;
int a[7];
int t[7]; 
int cnt = 7;

int main()
{
	cin >> t;
	
	while (t--)
	{
		memset(a, 0, sizeof a);
		
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				char ch; cin >> ch;
				if (ch == '0') a[i] |= 1 << j;
			}
		}
	} 
	
	return 0;
}
