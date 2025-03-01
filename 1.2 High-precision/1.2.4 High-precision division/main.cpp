#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string a;
	vector<int> dig, c;
	long long int b; cin >> a >> b;
	int len = a.size();
	
	for (int i = 0; i < len; ++i)
	{
		dig.push_back(a[i] - '0');
	}
	
	int remainder = 0;
	for (int i = 0; i < len; ++i)
	{
		int temp = remainder * 10 + dig[i];
		c.push_back(temp / b);
		remainder = temp % b;
	}
	
	int pos = 0;
    while (pos < c.size() - 1 && c[pos] == 0)
	{
        pos++;
    }
    
    for (int i = pos; i < c.size(); ++i)
    {
    	cout << c[i];
	}
	return 0;
}
