#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int a, b, ans = 0;
	scanf("%d %d", &a, &b);
	if(a < 2 && b < 2)
	ans = 0;
	else
	{
		while(a != 0 && b != 0)
		{
			if(a <= 2 && b > 2)
			{
				a = a+1;
				b = b-2;
				ans ++;
			}
			if(a > 2 && b <= 2)
			{
				a = a-2;
				b = b+1;
				ans ++;
			}
			if(a > 2 && b > 2)
			{
				a = a-2;
				b = b+1;
				ans ++;
			}
			if(a <= 2 && b <= 2)
			{
				ans++;
				a = 0, b = 0;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
