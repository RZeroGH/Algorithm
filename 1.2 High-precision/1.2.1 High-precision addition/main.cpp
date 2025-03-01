#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string num1, num2; cin >> num1 >> num2;
	vector<int> a, b, c;
	for (int i = num1.size() - 1; i >= 0; --i)
	{
		a.push_back(num1[i] - '0');
	}
	
	for (int i = num2.size() - 1; i >= 0; --i)
	{
		b.push_back(num2[i] - '0');
	}
	
	int maxlen = num1.size() > num2.size() ? num1.size() : num2.size();
	
	c.push_back(0); 
	for (int i = 0; i < maxlen; ++i)
	{
		int sum = (i < a.size() ? a[i] : 0) + (i < b.size() ? b[i] : 0) + c[i];
		c.push_back(sum / 10);
		c[i] = sum % 10;
	}
	
	if (c.back() == 0)
	{
		c.pop_back();
	} 
	
	for (int i = c.size() - 1; i >= 0; --i)
	{
		cout << c[i];
	}
	
	return 0;
} 
