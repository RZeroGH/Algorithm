#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	string s; cin >> s;
	unordered_map<char, int> mp;
	int kind = 0, n = s.size(), i = 0, j = 0, glomin = n;
	
	while(j < n)
	{
		if (mp[s[j]]++ == 0)
		{
			++kind;
		}
		while (kind == 26)
		{
			glomin = min(glomin, j - i + 1);
			
			if (mp[s[i++]]-- == 1)
			{
				--kind;
			}
		}
		++j;
	}
	
	cout << glomin << endl;
	return 0;
}
