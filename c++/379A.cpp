#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int n, a;
	scanf("%d %d", &n, &a);
	int ans = n;
	if(n/a == 1)
	{
		while(n >= a)
		{
		    ans += n/a;
			n = n/a+n%a;
		}
	}
	if(n/a > 1)
	{
		while(n / a >= 1)
		{
			ans += n/a;
			n = n/a+n%a;
		}
		ans = ans+n/a;
	}
	printf("%d\n", ans);
	return 0;
}
