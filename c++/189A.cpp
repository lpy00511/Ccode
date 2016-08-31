#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int num[5] = {0};
int main()
{
	int n, ans = 0, flag=1;
	scanf("%d", &n);
	for(int i = 0; i < 3; i++)
	{
		scanf("%d", &num[i]);
	}
	sort(num, num+3);
	for(int i = 0; i < 3; i++)
	{
		if(n % num[i] == 0)
		ans = n/num[i];
		else {
		ans = n/num[i];
		if(n%num[i] == num[(i+1)%3] || n%num[i] == num[(i+2)%3])
		{
			ans += 1;
		}
		else
		{
			while((n%num[i]+flag * num[i]) != num[(i+1)%3] && (n%num[i]+flag * num[i]) != num[(i+2)%3] )
			{
				ans -= 1;
				flag += 1;
				if(flag > ans)
				break;
			}
		}
		}
	}
	printf("%d\n", ans);
	return 0;
}
