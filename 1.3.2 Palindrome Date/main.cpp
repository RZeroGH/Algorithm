#include <iostream>

const int calendar[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

using namespace std;

bool ifvalid(int date, int start, int end)
{
	if (date >= start && date <= end)
	{
		int year = date / 10000;
		int day = date % 100; 
		int month = date % 10000 / 100;
		
		if (month >= 1 && month<= 12)
		{
			if (month == 2 && ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))))
			{
				if (day <= 29 && day >= 1)
				{
					return true;
				}
			}
			if (day <= calendar[month] && day >= 1)
			{
				return true;
			}
		}
	}
	
	return false;
}

int main()
{
	int start, end, start_year, end_year, cnt = 0; cin >> start >> end;
	start_year = start / 10000;
	end_year = end / 10000;
	
	for (int i = start_year; i <= end_year; ++i)
	{
		int tmp = i;
		int process = tmp % 10 * 1000 + tmp % 100 / 10 * 100 + 
		tmp % 1000 / 100 * 10 + tmp % 10000 / 1000 + tmp * 10000;
		if(ifvalid(process, start, end)) ++cnt;
	}
	
	cout << cnt;
	return 0;
}
