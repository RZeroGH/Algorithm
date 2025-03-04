#include <iostream>

using namespace std;

const int MAXNUM = 1e5 + 10;
int M, N;
long long pre[MAXNUM] = { 0 }, total = 0;

int main()
{
	cin >> N >> M;
	int l, r; cin >> l;
	for(int i = 1; i < M; ++i)
	{
		cin >> r;
		int tmp = r;
		if (l > r) swap(l, r);
		
		pre[l] += 1;
		pre[r] -= 1;
		l = tmp;
	}
	
	for (int i = 1; i < N; ++i)
	{
		pre[i] += pre[i - 1];
		
		long long a, b, c; cin >> a >> b >> c;
		
		total += min(a * pre[i], c + b * pre[i]);
	}
	
	cout << total << endl;
	return 0;
}
