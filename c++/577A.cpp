#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n, x, ans;
	scanf("%d%d", &n, &x);
	if(n <= x)
	{
		int a = x*1.0/n+0.5;
		ans = 0;
		for(int i = n; i >= a; i--)
		{
			if(x%i == 0 && x /i <= n)
			{
				ans ++;
			}
			else continue;
		}
		printf("%d\n", ans);
	}
	else if(x < n)
	{
		ans = 0;
		for(int i = x; i >= 1; i --)
		{
			if(x % i == 0)
			{
				ans ++;
			}
	    }
		printf("%d\n", ans);
	}
	return 0;
}
