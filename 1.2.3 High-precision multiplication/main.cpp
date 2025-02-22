#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string num1, num2; cin >> num1 >> num2;
	int len1 = num1.size(), len2 = num2.size();
	vector<int> a, b, c(len1 + len2 + 1, 0);
	
	for (int i = len1 - 1; i >= 0; --i)
	{
		a.push_back(num1[i] - '0');
	}
	
	for (int i = len2 - 1; i >= 0; --i)
	{
		b.push_back(num2[i] - '0');
	}
	
	for (int i = 0; i < len1; ++i)
	{
		for (int j = 0; j < len2; ++j)
		{
			c[i + j] += a[i] * b[j];
		}
	}
	
	for (int i = 0; i < c.size(); ++i)
	{
		c[i + 1] += c[i] / 10;
		c[i] %= 10;
	}
	
	while (c.size() > 1 && c.back() == 0)
	{
		c.pop_back();
	} 
	
	for (int i = c.size() - 1; i>= 0; --i)
	{
		cout << c[i];
	}
	return 0;
}
