#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n, m, x, y;
	int a[105];
	
	while(scanf("%d%d", &n, &m) != EOF)
	{
		memset(a, 0, sizeof(a));
		for(int i = 1; i <= n; i++)
		{
			scanf("%d", &x);
			for(int j = 1; j <= x; j++)
			{
				scanf("%d", &y);
				a[y]++;
			}
		}
		int flag = 0;
		for(int i = 1; i <= m; i++)
		{
			if(a[i] == 0)
			{ 
				flag = 1; break;
			}
		}
		if(flag) printf("NO\n");
		else printf("YES\n");
	} 
	return 0;
} 
