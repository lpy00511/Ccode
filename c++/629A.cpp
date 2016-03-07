#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char str[105][105];
int a[105];
int b[105];
int num[105];
int main()
{
	int n, m;
	scanf("%d", &n);
	int i,j;
	for(i = 0; i < n; i++)
	{
		scanf("%s", str[i]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j ++)
		{
			if(str[i][j]=='C')
			a[i]++;
		}
	}
	for(j = 0; j < n; j++)
	{
		for(i = 0; i < n; i ++)
		{
			if(str[i][j]=='C')
			b[j]++;
		}
	}
	int ans = 0;
	for(int k = 0; k < n; k ++)
	{
		//printf("%d %d ", a[k], b[k]);
		if(a[k] < 2)
		ans+=0;
		if(a[k] >= 2)
		{
			ans += a[k]*(a[k]-1)/2;
		}
		if(b[k] < 2)
		ans+=0;
		if(b[k] >= 2)
		{
			ans += b[k]*(b[k]-1)/2;
		}  
	}
	printf("%d\n", ans);
	return 0;
}
