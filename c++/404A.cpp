#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	char a[305][305];
	for(int i = 0; i < n; i ++)
	{
		scanf("%s", a[i]);
	}
	// int f = 0;
	if(a[0][0] == a[0][1])
	printf("NO\n");
	else 
	{
	for(int i = 0; i <= n-1; i ++)
	{
		if(a[i][i] == a[i][n-1-i] && a[i][i] == a[0][0]) 
		{
			f ++;	
		}
	}
	for(int i = 0; i <= n-1; i ++)
	{
		a[i][i] = a[i][n-1-i] = a[0][1];
	}
	int ans = 0;
	if(f == n)
	{
		for(int i = 0; i < n; i ++)
		{
			for(int j = 0; j < n; j ++)
			{
				if(a[i][j] == a[0][1])
				{
					ans = 1;
				}
				else{
					ans = 0;
					break;
				}
			}
			if(ans == 0)
			break;
		}
	}
	if(ans == 1) printf("YES\n");
	else printf("NO\n");
	}
	return 0;
}
