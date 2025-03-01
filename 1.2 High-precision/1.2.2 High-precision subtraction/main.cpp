#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string num1, num2; cin >> num1 >> num2;
	vector<int> a, b, c;
	int maxlen = 0;
	
	int flag = 0;
	if (num1.size() < num2.size())
	{
		string tmp = num1;
		num1 = num2;
		num2 = tmp;
		flag = 1;
	}
	else if (num1.size() == num2.size())
	{
		for (int i = 0; i < num1.size(); ++i)
		{
			if (num1[i] < num2[i])
			{
				string tmp = num1;
				num1 = num2;
				num2 = tmp;
				flag = 1;
				break;
			}
		}
	}
	
	for (int i = num1.size() - 1; i >= 0; --i)
	{
		a.push_back(num1[i] - '0');
	}
	
	for (int i = num2.size() - 1; i >= 0; --i)
	{
		b.push_back(num2[i] - '0');
	}

	maxlen = num1.size();
	c.resize(maxlen, 0);
	
	for (int i = 0; i < maxlen; ++i)
	{
		int sub = a[i] - (i < b.size() ? b[i] : 0) + c[i];
		if (sub < 0)
		{
			sub += 10;
			c[i + 1] = -1;
		}
		c[i] = sub;
	}
	
	while (c.size() > 1 && c.back() == 0) c.pop_back();
		
	if (flag == 1) cout << '-';
	for (int i = c.size() - 1; i >= 0; --i)
	{
		cout << c[i];
	}
	return 0;
}
