#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n;
	int a[1001][5];
	scanf("%d", &n);
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < 3; j ++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int ans , f = 0;
	for(int i = 0; i < n; i ++)
	{
		ans = 0;
		for(int j = 0; j < 3; j ++)
		{
			if(a[i][j] == 1)
			ans++;
		}
		if(ans >= 2)
		f ++;
	}
	printf("%d\n", f);
	return 0;
}
