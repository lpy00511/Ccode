#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char str[1005][1005];
char s[1005][1005];
int main()
{
	int n, m, sum = 0, ans1, ans2;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++)
	{
		scanf("%s", str[i]);
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			s[i][j] = str[i][j];
		}
	}
	int max_n = -1, max_m = -1;
	int a, b, a1=0, b1=0;
	for(int i = 0; i < n; i++)
	{
		ans1 = 0;
		for(int j = 0; j < m; j++)
		{
			if(str[i][j] == '*')
			{
				ans1++;
				sum ++;
			}
		}
		if(ans1 > max_n)
		{
			max_n = ans1;
			a = i;
		}
	}
	for(int j = 0;j < m; j++)
	{
		if(str[a][j] == '*')
		str[a][j] ='.'; 
	}
	printf("%d %d %d\n", sum,max_n, a);
	for(int j = 0; j < m; j++)
	{
		ans2 = 0;
		for(int i = 0; i < n; i++)
		{
			if(str[i][j] == '*')
			{
				ans2++;
			}
		}
		if(ans2 >= max_m)
		{
			max_m = ans2;
			b = j;
		}
	}
	if(sum <= 2)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				if(s[i][j] == '*')
				{
				//	printf("%d %d\n",i, j);
					a1=i+1;
					s[i][j] = '.';
					break;
				}
			}
			if(a1)
			break;
		}
		for(int j = 0; j < m; j++)
		{
			for(int i = 0; i < n; i++)
			{
				if(s[i][j] == '*')
				{
					b1=j;
				}
			}
		}
		printf("YES\n");
		printf("%d %d\n", sum==0?a1+1:a1, b1+1);
	}
	else {
		if(str[a][b] == '*')
		max_m = max_m-1;
		if(max_n + max_m == sum)
		{
			printf("YES\n");
			printf("%d %d\n", a+1, b+1);
		}
		else printf("NO\n");
	}
	
	return 0;
}
